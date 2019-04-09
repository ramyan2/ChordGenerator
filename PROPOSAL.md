# CS 126 Project Proposal: Music Chord Generator
## By: Ramya Nagapudi

## Description:
This application is compatible with the sound and graphical abilities of openFrameworks. I plan to use 27 rectangular buttons to represent a black and white keyboard consisting of all the notes on a scale, including sharps and flats. Next to this keyboard will be 4 rectangular buttons saying augmented, diminished, major, and minor. 
This application will provide a nice graphical representation of a keyboard along with displaying all the notes of it's corresponding keys. Based on the note that I select, I have the option to generate one of the four particular chords next to the piano (represented by 4 buttons). 
I will be able to pick a particular note by selecting the key on the keyboard that has my desired note, and I will be able to pick a particular chord by selecting the button that has my desired chord. 
To produce the sound of a note or a chord I will be using the ofSound library where I will play and stream audio files. I will do this by working with ofSoundPlayer and maybe ofSoundStream so I can generate and process sound. 
Ultimately through this application I plan on being able to see a keyboard along with being able to select one note on this keyboard, then have the option to pick a particular chord, then click the generate button so I can hear either the note itself, or an augmented, diminished, major, or minor key of this note.

## Libraries:
* openFrameworks: The framework used to build the music chord generator graphics and audio
* graphical user interface (GUI): to represent a keyboard and multiple buttons
* audio(ofSoundPlayer): to get simple access to sound files, easily load and play sounds, add sound effects to an app, and extract some data about the file's sound as it's playing.

## Components:
* Keyboard: to create the visual of a keyboard I will make 27 black/white rectangular buttons that represent a particular note and put them together to form the look of a keyboard, and each button will have a designated sound of that note when clicked on. I will create the buttons using ofxGUI, particularly ofxButton.
* Chords: next to this keyboard will be 4 rectangular buttons representing the four chords, and these can only be selected (or a chord can only be generated) after a note is selected (clicked) on the keyboard. I will create the buttons using ofxGUI, particularly ofxButton.
* Generator: after clicking on a note from the keyboard and/or clicking a type of chord, you then press the generate button that will generate the unique audio chord/note the user would like to hear (ex. user selects "G" on the keyboard then selected "Major" on the list of chords, after clicking the generate button they will hear an audio of G major) OR (ex. user selects "G" on the keyboard then clicks generate button they will hear an audio of the note G). I will create the button using ofxGUI, particularly ofxButton. I will produce the audio of a note/chord using ofsound or particularly ofSoundPlayer so I can load and play an audio. 

