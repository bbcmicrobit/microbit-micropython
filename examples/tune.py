"""
This demo requires a speaker connected to P0 and GND
"""
import microbit

# play Bach Prelude in C.
notes = [
    'c4', 'e4', 'g4', 'c5', 'e5', 'g4', 'c5', 'e5', 'c4', 'e4', 'g4', 'c5', 'e5', 'g4', 'c5', 'e5',
    'c4', 'd4', 'g4', 'd5', 'f5', 'g4', 'd5', 'f5', 'c4', 'd4', 'g4', 'd5', 'f5', 'g4', 'd5', 'f5',
    'b3', 'd4', 'g4', 'd5', 'f5', 'g4', 'd5', 'f5', 'b3', 'd4', 'g4', 'd5', 'f5', 'g4', 'd5', 'f5',
    'c4', 'e4', 'g4', 'c5', 'e5', 'g4', 'c5', 'e5', 'c4', 'e4', 'g4', 'c5', 'e5', 'g4', 'c5', 'e5',
    'c4', 'e4', 'a4', 'e5', 'a5', 'a4', 'e5', 'a4', 'c4', 'e4', 'a4', 'e5', 'a5', 'a4', 'e5', 'a4',
    'c4', 'd4', 'f#4', 'a4', 'd5', 'f#4', 'a4', 'd5', 'c4', 'd4', 'f#4', 'a4', 'd5', 'f#4', 'a4', 'd5',
    'b3', 'd4', 'g4', 'd5', 'g5', 'g4', 'd5', 'g5', 'b3', 'd4', 'g4', 'd5', 'g5', 'g4', 'd5', 'g5',
    'b3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5', 'b3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5',
    'b3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5', 'b3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5',
    'a3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5', 'a3', 'c4', 'e4', 'g4', 'c5', 'e4', 'g4', 'c5',
    'd3', 'a3', 'd4', 'f#4', 'c5', 'd4', 'f#4', 'c5', 'd3', 'a3', 'd4', 'f#4', 'c5', 'd4', 'f#4', 'c5',
    'g3', 'b3', 'd4', 'g4', 'b4', 'd4', 'g4', 'b4', 'g3', 'b3', 'd4', 'g4', 'b4', 'd4', 'g4', 'b4'
]

microbit.music.play_tune(microbit.io.P0, notes)
