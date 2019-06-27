upload:
	sudo /home/jdwyer/Downloads/arduino-1.8.9/arduino --upload main/main.ino --board arduino:avr:uno --port /dev/ttyACM0

console:
	sudo miniterm.py /dev/ttyACM0 9600
