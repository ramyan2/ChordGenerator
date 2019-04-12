#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    
   

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'c') {
        my_player.load("C.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'C') {
        my_player.load("C#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'd') {
        my_player.load("D.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'D') {
        my_player.load("D#.mp3");
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
    if (key == 'F') {
        my_player.load("F#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'g') {
        my_player.load("G.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'G') {
        my_player.load("G#.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'a') {
        my_player.load("A.mp3");
        my_player.setVolume(0.5);
        my_player.play();
    }
    if (key == 'A') {
        my_player.load("A#.mp3");
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
