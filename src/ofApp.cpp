#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    keyboard_image.load("keyboard_image.png");
    instructions_page.load("SideInstructions.png");
    
    gui.setup();
    gui.add(volume.setup("volume", 1.0, 0.0, 1.0));
    
    //load the notes
    c_note.load("C.mp3");
    d_note.load("D.mp3");
    e_note.load("E.mp3");
    f_note.load("F.mp3");
    g_note.load("G.mp3");
    a_note.load("A.mp3");
    b_note.load("B.mp3");
    
    //load the sharped notes
    c_sharp.load("C#.mp3");
    d_sharp.load("D#.mp3");
    e_sharp.load("E#.mp3");
    f_sharp.load("F#.mp3");
    g_sharp.load("G#.mp3");
    a_sharp.load("A#.mp3");
    b_sharp.load("B#.mp3");
    
    //load the note's major chords
    c_major.load("Cmajor.mp3");
    d_major.load("Dmajor.mp3");
    e_major.load("Emajor.mp3");
    f_major.load("Fmajor.mp3");
    g_major.load("Gmajor.mp3");
    a_major.load("Amajor.mp3");
    b_major.load("Bmajor.mp3");
    
    //load the note's minor chords
    c_minor.load("Cminor.mp3");
    d_minor.load("Dminor.mp3");
    e_minor.load("Eminor.mp3");
    f_minor.load("Fminor.mp3");
    g_minor.load("Gminor.mp3");
    a_minor.load("Aminor.mp3");
    b_minor.load("Bminor.mp3");
    
    //load the sharped note's major chords
    c_sharp_major.load("C#major.mp3");
    d_sharp_major.load("D#major.mp3");
    f_sharp_major.load("F#major.mp3");
    g_sharp_major.load("G#major.mp3");
    a_sharp_major.load("A#major.mp3");
    
    //load the sharped note's minor chords
    c_sharp_minor.load("C#minor.mp3");
    d_sharp_minor.load("D#minor.mp3");
    f_sharp_minor.load("F#minor.mp3");
    g_sharp_minor.load("G#minor.mp3");
    a_sharp_minor.load("A#minor.mp3");

    //assign the map for the notes
    sounds['a'] = a_note;
    sounds['b'] = b_note;
    sounds['c'] = c_note;
    sounds['d'] = d_note;
    sounds['e'] = e_note;
    sounds['f'] = f_note;
    sounds['g'] = g_note;
    
    //assign the map for the sharped notes
    sounds['A'] = a_sharp;
    sounds['B'] = b_sharp;
    sounds['C'] = c_sharp;
    sounds['D'] = d_sharp;
    sounds['E'] = e_sharp;
    sounds['F'] = f_sharp;
    sounds['G'] = g_sharp;
    
    //assign the map for the major chords
    sounds['1'] = c_major;
    sounds['2'] = c_sharp_major;
    sounds['3'] = d_major;
    sounds['4'] = d_sharp_major;
    sounds['5'] = e_major;
    sounds['6'] = f_major;
    sounds['7'] = f_sharp_major;
    sounds['8'] = g_major;
    sounds['9'] = g_sharp_major;
    sounds['0'] = a_major;
    sounds['-'] = a_sharp_major;
    sounds['='] = b_major;
    
    //assign the major for the minor chords
    sounds['!'] = c_minor;
    sounds['@'] = c_sharp_minor;
    sounds['#'] = d_minor;
    sounds['$'] = d_sharp_minor;
    sounds['%'] = e_minor;
    sounds['^'] = f_minor;
    sounds['&'] = f_sharp_minor;
    sounds['*'] = g_minor;
    sounds['('] = g_sharp_minor;
    sounds[')'] = a_minor;
    sounds['_'] = a_sharp_minor;
    sounds['+'] = b_minor;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //displays the keyboard, instructions, and volume bar
    keyboard_image.draw(300, 0, 730, 768);
    instructions_page.draw(0,0,300, 768);
    gui.draw();
    my_player.setVolume(volume);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //PROBLEM: if not a keyboard char it breaks my code
    sounds[key].play();
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

//--------------------------------------------------------------
void ofApp::playPressed(){
}

//--------------------------------------------------------------
void ofApp::stopPressed(){
}

