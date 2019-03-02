import serial
import time

ArduinoSerial = serial.Serial('/dev/ttyACM0', 115200)  # Create Serial port object called arduinoSerialData
time.sleep(2)  # wait for 2 secounds for the communication to get established
veri='15'
while 1:

	ArduinoSerial.write(bytes(veri, 'UTF-8'))  # send 1
	ArduinoSerial.write(bytes('\n', 'UTF-8'))  # send 1

	time.sleep(0.5)