from microbit import *

needles = (Image.CLOCK12, Image.CLOCK1, Image.CLOCK2, Image.CLOCK3,
           Image.CLOCK4, Image.CLOCK5, Image.CLOCK6, Image.CLOCK7, 
           Image.CLOCK8, Image.CLOCK9, Image.CLOCK10, Image.CLOCK11)

# You need to spin the microbit about a few times to help calibrate the compass

# Scroll a message to encourage user to help calibrate the compass
# "Spin" "Me!" reads better than "Spin Me!" due to lack of kerning
display.scroll("Spin")
display.scroll("Me!")

# Start calibrating
compass.calibrate()

# Spin needle until calibrated.
while compass.is_calibrating():
    for i in range(12):
        display.print(needles[i])
        sleep(80)
display.clear()

# Try to keep needle pointed in (roughly) the same direction
while True:
    sleep(500)
    needle = ((15 - compass.heading()) // 30) % 12
    display.print(needles[needle])
