############################################
#       Build18 2018 Gesture drone         #
#   Team member: Hengrui (Henry) Zhang     #
#                Ruixuan Liu               #
#                Alvin Shi                 #
############################################


import os, inspect, sys, threading
src_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
arch_dir = 'lib'
sys.path.insert(0, os.path.abspath(os.path.join(src_dir, arch_dir)))

import Leap
from Leap import SwipeGesture
import socket

request_state = 1
roll = 0
pitch = 0
yaw = 0
data = "%d%d%d", (roll, pitch, yaw)


class SampleListener(Leap.Listener):
    finger_names = ['Thumb', 'Index', 'Middle', 'Ring', 'Pinky']
    bone_names = ['Metacarpal', 'Proximal', 'Intermediate', 'Distal']
    state_names = ['STATE_INVALID', 'STATE_START', 'STATE_UPDATE', 'STATE_END']

    def on_init(self, controller):
        print "Initialized"

    def on_connect(self, controller):
        print "Connected"

        # Enable gestures
        controller.enable_gesture(Leap.Gesture.TYPE_CIRCLE);
        controller.enable_gesture(Leap.Gesture.TYPE_KEY_TAP);
        controller.enable_gesture(Leap.Gesture.TYPE_SCREEN_TAP);
        controller.enable_gesture(Leap.Gesture.TYPE_SWIPE);

    def on_disconnect(self, controller):
        # Note: not dispatched when running in a debugger.
        print "Disconnected"

    def on_exit(self, controller):
        print "Exited"

    def on_frame(self, controller):
        global roll, pitch, yaw
        global data

        # Get the most recent frame and report some basic information
        frame = controller.frame()
        # Get hands
        for hand in frame.hands:
            # print "  %s, id %d, position: %s" % (
            #     handType, hand.id, hand.palm_position)

            # Get the hand's normal vector and direction
            normal = hand.palm_normal
            direction = hand.direction

            # Calculate the hand's pitch, roll, and yaw angles
            print "  pitch: %f degrees, roll: %f degrees, yaw: %f degrees" % (
                direction.pitch * Leap.RAD_TO_DEG,
                normal.roll * Leap.RAD_TO_DEG,
                direction.yaw * Leap.RAD_TO_DEG)

            roll = normal.roll * Leap.RAD_TO_DEG
            pitch = direction.pitch * Leap.RAD_TO_DEG
            yaw = direction.yaw * Leap.RAD_TO_DEG

            if (abs(roll) < 25 and abs(pitch) < 25 and abs(yaw) < 25):
                data = str(10)
            elif (max(abs(roll), abs(pitch), abs(yaw)) == abs(roll)):
                if roll > 0:
                    data = str(3)
                else:
                    data = str(4)
            elif (max(abs(roll), abs(pitch), abs(yaw)) == abs(pitch)):
                if pitch > 0:
                    data = str(5)
                else:
                    data = str(6)
            elif (max(abs(roll), abs(pitch), abs(yaw)) == abs(yaw)):
                if yaw > 0:
                    data = str(7)
                else:
                    data = str(8)

            print(data)
            sock.sendall(data)

            # Get fingers
            # for finger in hand.fingers:

                # print "    %s finger, id: %d, length: %fmm, width: %fmm" % (
                #     self.finger_names[finger.type],
                #     finger.id,
                #     finger.length,
                #     finger.width)

        # # Get gestures
        # for gesture in frame.gestures():
        #     if gesture.type == Leap.Gesture.TYPE_SWIPE:
        #         swipe = SwipeGesture(gesture)
        #         print "  Swipe id: %d, state: %s, position: %s, direction: %s, speed: %f" % (
        #                 gesture.id, self.state_names[gesture.state],
        #                 swipe.position, swipe.direction, swipe.speed)

        if not (frame.hands.is_empty and frame.gestures().is_empty):
            print ""

    def state_string(self, state):
        if state == Leap.Gesture.STATE_START:
            return "STATE_START"

        if state == Leap.Gesture.STATE_UPDATE:
            return "STATE_UPDATE"

        if state == Leap.Gesture.STATE_STOP:
            return "STATE_STOP"

        if state == Leap.Gesture.STATE_INVALID:
            return "STATE_INVALID"


def leap_node():
    # Create a sample listener and controller
    listener = SampleListener()
    controller = Leap.Controller()

    # Have the sample listener receive events from the controller
    controller.add_listener(listener)
    while 1:
        pass



#------------------------multithread-----------------------------------------

def request_handler():
    global request_state
    while 1:
        #print "request"

        request_state = sock.recv(3072)
        #print 'recieved request', request_state
        request_state = request_state.decode('utf8')

class leapThread(threading.Thread):
    def __init__(self, threadID, threadName):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.threadName = threadName

    def run(self):
        # Run leap node when thread start
        print('leap node running')
        leap_node()

class requestThread(threading.Thread):
    def __init__(self, threadID, threadName):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.threadName = threadName

    def run(self):
        # Run request handler
        print('request handler running')
        request_handler()



#### Set up client to listen to server data requist
Host = '192.168.137.32'
Port = 50007
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((Host, Port))

threads = []
# Create threads
leap_thread = leapThread(1, 'leap_thread')
request_thread = requestThread(2, 'request_thread')

# Start the threads
leap_thread.start()
request_thread.start()

threads.append(leap_thread)
threads.append(request_thread)


for t in threads:
    t.join()


sock.close()
