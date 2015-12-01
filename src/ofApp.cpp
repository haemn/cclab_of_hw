#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    katherine.setup();
    
  // sven = 10;
    
    for (int i=0; i<numSvens; i++) {
        sven[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    katherine.move();
    
    for (int i=0; i<numSvens; i++){
        sven[i].move();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    katherine.display();
    
    for (int i=0; i<numSvens; i++){
        sven[i].display();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
