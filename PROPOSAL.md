# CS 126 Project Proposal: Music Chord Generator
## By: Ramya Nagapudi

## Description:
This application is compatible with the sound and graphical abilities of openFrameworks. I have an image of a piano that consists of all the notes on a scale, including sharps and flats. Next to this piano I will also have an instructions manual on the side to help the user utilize this chord generator. 
This application will provide a nice graphical representation along with the option to play a note, a sharped note, a major chord, a sharped note's major chord, a minor chord, or a sharped note's minor chord.
I will be able to select a particular note by selecting the key on the keyboard that has my desired note, and I will be able to pick a particular chord by looking at the instructions manual that lists out which key on the keyboard corresponds to what chord, and I will select my desired chord. 
To produce the sound of a note or a chord I will be using the ofSound library where I will play and stream audio files. I will do this by working with ofSoundPlayer so I can generate and process sound. 
Ultimately through this application I plan on being able to see a piano along with being able to play any note on this piano, and also have the option to play a particular chord, then be able to manipulate the volume of the sound to my liking. 

## Libraries:
* openFrameworks: The framework used to build the music chord generator graphics and audio
* graphical user interface (GUI): to represent a piano, instructions manual, and volume slider
* audio(ofSoundPlayer): to get simple access to sound files, easily load and play sounds, add sound effects to an app, and extract some data about the file's sound as it's playing.

## Components:
* Piano : To create the visual of a piano I will load the image of a piano that is restricted to one scale and has labels of all the notes of the scale, including sharps and flats. 
* Instructions Manual: To have an instructions manual I will create one myself using textboxes, download that image, load it, and figure out the coordinates to where it will be placed next to the piano. 
* Volume Slider: Will utilize Gui and ofSoundPlayer together to load a volume slider on the screen and control the sounds currently being played. 
* Notes: Download all the audio files of each note, load, and play it when a particular key is pressed. Will do this using ofSoundPlayer, a map, and will be loaded in the setup method and played in the keyPressed method.
* Chords: Personally record audio files for all the chords for best quality, then load and play it when a particular key is pressed. Will also do this using ofSoundPlayer, a map, and will be played in the keyPressed method and loaded in the setup method. 

