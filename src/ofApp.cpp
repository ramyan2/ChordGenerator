#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    keyboard_image.load("keyboard_image.png");

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
}

//--------------------------------------------------------------
void ofApp::draw(){
    keyboard_image.draw(0, 0, 1024, 768);
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
