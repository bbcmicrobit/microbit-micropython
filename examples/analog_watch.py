from microbit import *

hands = (Image.CLOCK12, Image.CLOCK1, Image.CLOCK2, Image.CLOCK3, 
         Image.CLOCK4, Image.CLOCK5, Image.CLOCK6, Image.CLOCK7, 
         Image.CLOCK8, Image.CLOCK9, Image.CLOCK10, Image.CLOCK11,
         )

#A centre dot of brightness 2.
ticker_image = Image("\n\n  2  \n\n\n")

#Adjust these to taste
MINUTE_BRIGHT = 0.1111
HOUR_BRIGHT = 0.55555

#Generate hands for 5 minute intervals
def fiveticks():
    fivemins = 0
    hours = 0
    while True:
        yield  hands[fivemins]*MINUTE_BRIGHT + hands[hours]*HOUR_BRIGHT
        fivemins = (fivemins+1)%12
        hours = (hours + (fivemins == 0))%12

#Generate hands with ticker superimposed for 1 minute intervals.      
def ticks():
    on = True
    for face in fiveticks():
        for i in range(5):
            if on:
                yield face + ticker_image
            else:
                yield face - ticker_image
            on = not on

#Run a clock speeded up 60 times, so we can watch the animation.
display.animate(ticks(), 1000)

#It even runs in the background...
#display.animate(ticks(), 1000, wait=False)
#So you can change the brightness or
#change the ticker_image while it runs,


