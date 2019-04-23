# CS 126 Music Generator Development Log
## Code Review #1
* Wrote a setup function in my ofApp cpp to play an audio mp3 file. In this I loaded the file, corrected the volume, and played the file. 
* Utilized the ofSound library to create an ofSoundPlayer object and perform its methods such as load, setVolume, and play that I use in my setup function.
## Code Review #2
* Wrote in my keyPressed function in my ofApp cpp to play an audio mp3 file for every note on the scale, so that when the user presses the letter of their desired note they can hear the sound of the note. 
* User must enter uppercase letter for sharps. 
* Wrote in setup and draw functions and uploaded a picture of a keyboard with displayed notes and an example of how to use it.
* Figured out how to play a sound when more than one key is pressed by utilizing an array of 255 booleans and writing in the keyReleased and update functions.
* The array contains 255 booleans each representing a single key on the laptop's keyboard. 
* In the keyPressed function I set the particular key pressed index to true then in the keyReleased function I set that same index pressed to false.
* Then in the update function I am able to read multiple keys.
* Purpose of this is so there is no confusion on lowercase for a normal note and uppercase for a sharp, makes it easier for the user.
* Updated keyboard image to a nicer one. 
* Added a volume slider so that the user can control the volume of the sound they produce.
## Code Review #3
* Personally recorded 24 audio files consisting of different musical chords.
* Converted these into mp3 files.
* Wrote in update function since I need to read two keys being pressed (the note name and its designated key, "g , M" for G Major chord).
* Am able to generate 24 different chords from the basic notes of a keyboard through the keyPressed, keyReleased, and update methods. 
* Created playPressed and stopPressed methods to ofApp class to play an audio when a button is pressed and stop an audio when a button is pressed.
* Took away the stopPressed button since it was not useful to my project.
* In my h file I declared an ofxButton object called play, hence utilizing ofxGUI.
* In my setup function I called the addListener method to my play object that is an ofxButton so that my button can identify when it is pressed, and perform its designated action.
* When the button is pressed I load the audio file of the particular key pressed by simply calling the load function to my ofSoundPlayer obejct my_player.
* Fixed some chords that were being generated.
 
