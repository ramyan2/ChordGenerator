#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    keyboard_image.load("keyboard_image.png");
    
    play.addListener(this, &ofApp::playPressed);
    stop.addListener(this, &ofApp::stopPressed);
    
    gui.setup();
    gui.add(volume.setup("volume", 1.0, 0.0, 1.0));
    gui.add(play.setup("play"));
    
    my_player.load("F.mp3");
}

//--------------------------------------------------------------
void ofApp::update(){
    if (array['c'] && array['#']) {
        my_player.load("C#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['d'] && array['#']) {
        my_player.load("D#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['f'] && array['#']) {
        my_player.load("F#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['g'] && array['#']) {
        my_player.load("G#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['a'] && array['#']) {
        my_player.load("A#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['a'] && array['M']) {
        my_player.load("Amajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['a'] && array['m']) {
        my_player.load("Aminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['A'] && array['M']) {
        my_player.load("A#major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['A'] && array['m']) {
        my_player.load("A#minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['b'] && array['M']) {
        my_player.load("Bmajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    
    if (array['b'] && array['m']) {
        my_player.load("Bminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['c'] && array['M']) {
        my_player.load("Cmajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['c'] && array['m']) {
        my_player.load("Cminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['C'] && array['M']) {
        my_player.load("C#major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['C'] && array['m']) {
        my_player.load("C#minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['d'] && array['M']) {
        my_player.load("D major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['d'] && array['m']) {
        my_player.load("D minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['D'] && array['M']) {
        my_player.load("D# major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['D'] && array['m']) {
        my_player.load("D# minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['e'] && array['M']) {
        my_player.load("Emajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['e'] && array['m']) {
        my_player.load("Eminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['f'] && array['M']) {
        my_player.load("Fmajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['f'] && array['m']) {
        my_player.load("Fminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['F'] && array['M']) {
        my_player.load("F#major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['F'] && array['m']) {
        my_player.load("F#minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['g'] && array['M']) {
        my_player.load("Gmajor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['g'] && array['m']) {
        my_player.load("Gminor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['G'] && array['M']) {
        my_player.load("G#major.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (array['G'] && array['m']) {
        my_player.load("G#minor.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    keyboard_image.draw(0, 0, 1024, 768);
    gui.draw();
    my_player.setVolume(volume);
}

//--------------------------------------------------------------
bool array[255];

void ofApp::keyPressed(int key){
    array[key] = true;
    
    if (key == 'c') {
        my_player.load("C.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'd') {
        my_player.load("D.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'e') {
        my_player.load("E.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'f') {
        my_player.load("F.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'g') {
        my_player.load("G.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'a') {
        my_player.load("A.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'b') {
        my_player.load("B.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    array[key] = false;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void ofApp::playPressed(){
    my_player.play();
}

//--------------------------------------------------------------
void ofApp::stopPressed(){
    my_player.play();
}

