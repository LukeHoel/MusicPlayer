# MusicPlayer
This is a simple music playing software written in c++
## How do I compile/run it?
Main.cpp is the main file, and there is a linux binary in the repo already

Run it on a text file like "./a.out BinarySunset.txt"
## I ran it, but there's all kinds of numbers, and no sound!
This program generates sound waves, it doesn't play the sound. You will need to pipe it into another program to play it.

On linux with pulseaudio "./a.out BinarySunset.txt | pacat"
