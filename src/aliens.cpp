//
//  aliens.cpp
//  cclab_day2
//
//  Created by Be positive Haemin on 11/9/15.
//
//

#include "aliens.hpp"
#include "ofMain.h"

aliens::aliens(){
    posX = ofGetWidth()*0.5;
    posY = ofGetHeight()*0.5;
    velX = ofRandom(-5, 5);
    velY = ofRandom(-3, 3);
    width = 150;
    height =100;
}

void aliens::setup(){
    size = 50;
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    
    ofBackground(0,0,0);
}



void aliens::move(){
    posX += velX;
    posY += velY;
    
    if( posX>ofGetWidth() || posX<0){
        velX=velX*(-1);
    }
    
    if( posY>ofGetHeight() || posY<0){
        velY=velY*(-1);
    }
}

void aliens::display(){
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    ofRect(posX, posY, width, height);// main rect
    

 //   ofCircle(posX, posY, size);
    
    //eyes
    ofPushStyle();
    ofSetColor(255);
    //ofRect(posX, posY, 50, 50);
    ofRect(posX, posY-20, width/5,height/5);
    ofRect(posX+120, posY-20, width/5,height/5);
    ofPopStyle();
    
    ofPushStyle();
    ofSetColor(255,46,115);
    ofRect(posX+57, posY+60, width/4,height/5);//mouse
    ofPopStyle();
    
    ofPushStyle();
     ofSetColor(255,236,63);
    ofCircle(posX + 30, posY + 35 , 15);
    ofCircle(posX + 120, posY + 35 , 15);
    ofPopStyle();
    
    ofPushStyle();
    ofSetColor(255,255,255);
    ofLine(posX +15, posY + 60, posX-30 , posY+50);
    ofLine(posX +15, posY + 70, posX-30 , posY+80);
    ofLine(posX +135, posY + 60, posX+180 , posY+50);
    ofLine(posX +135, posY + 70, posX+180 , posY+80);
    ofPopStyle();
    
    
      //  ofSetRectMode(OF_RECTMODE_CENTER);
}

