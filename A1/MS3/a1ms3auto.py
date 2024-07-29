import pyautogui as gui
import time

datafile = 'a1ms3-inputs.txt'

# pause 3 seconds while you set focus to the terminal/console window:
print('Click on the terminal/console window where the automated keyboard data needs to be entered...')
print('NOTE: You have 5 seconds to do this!')
time.sleep(5)

# auto type test data from text file:
#with open('w4p2-inputs.txt', 'r') as tst:
with open(datafile, 'r') as tst:
    time.sleep(1)
    tst = tst.readlines()
    for i in range(0, len(tst), 1):
        print(tst[i])
        # If you have a slow connection, increase below sleep argument to 0.25 or more
        time.sleep(0.18)
        gui.typewrite(tst[i])

print('Auto data input completed.')
