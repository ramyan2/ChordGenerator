#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include <unordered_set>
#include <vector> 

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void playPressed();
        void stopPressed();
		
    ofSoundPlayer my_player;
    
    ofSoundPlayer a_note;
    ofSoundPlayer b_note;
    ofSoundPlayer c_note;
    ofSoundPlayer d_note;
    ofSoundPlayer e_note;
    ofSoundPlayer f_note;
    ofSoundPlayer g_note;
    
    ofSoundPlayer a_sharp;
    ofSoundPlayer b_sharp;
    ofSoundPlayer c_sharp;
    ofSoundPlayer d_sharp;
    ofSoundPlayer e_sharp;
    ofSoundPlayer f_sharp;
    ofSoundPlayer g_sharp;
    
    ofSoundPlayer a_major;
    ofSoundPlayer b_major;
    ofSoundPlayer c_major;
    ofSoundPlayer d_major;
    ofSoundPlayer e_major;
    ofSoundPlayer f_major;
    ofSoundPlayer g_major;
    
    ofSoundPlayer a_minor;
    ofSoundPlayer b_minor;
    ofSoundPlayer c_minor;
    ofSoundPlayer d_minor;
    ofSoundPlayer e_minor;
    ofSoundPlayer f_minor;
    ofSoundPlayer g_minor;
    
    ofSoundPlayer a_sharp_major;
    ofSoundPlayer c_sharp_major;
    ofSoundPlayer d_sharp_major;
    ofSoundPlayer f_sharp_major;
    ofSoundPlayer g_sharp_major;
    
    ofSoundPlayer a_sharp_minor;
    ofSoundPlayer c_sharp_minor;
    ofSoundPlayer d_sharp_minor;
    ofSoundPlayer f_sharp_minor;
    ofSoundPlayer g_sharp_minor;
    
    ofImage keyboard_image;
    ofImage instructions_page;
    
    map<char, ofSoundPlayer> sounds;
 
    ofxPanel gui;
    ofxFloatSlider volume;
    
    bool array[];
};
