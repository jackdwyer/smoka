import fileinput
import subprocess

BEEP_FILE = "./beep-02.wav"

for line in fileinput.input():
    data = line.strip().split(',')
    if int(data[2]) < 100:
        print("triggered!!!")
        subprocess.run(["/usr/bin/aplay", BEEP_FILE])
    print(data)
