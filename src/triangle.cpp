//
//  triangle.cpp
//  Homework4_zeno
//
//  Created by Nelson on 20/02/17.
//
//

#include "triangle.h"

triangle::triangle() {
    catchUpSpeed = 0;
}

void triangle::draw() {
    ofFill();
    
    ofSetColor(255,10);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofDrawRectangle(0, 0, ofGetWidth(),ofGetHeight());
    ofSetColor(255,155,0,255);
//    ofVec2f v1 = (ofVec2f(5* cos(pos.x)), ofVec2f(5 * sin(pos.y)));
//    ofVec2f v2 = (ofVec2f(5     * cos(pos.x)), ofVec2f(5 * sin(-pos.y)));
//    ofVec2f v3 = (ofVec2f(2), ofVec2f(2));
    ofVec2f v1 = ofVec2f(pos.x,pos.y);
    ofVec2f v2 = ofVec2f(pos.x - 15, pos.y -15);
    ofVec2f v3 = ofVec2f(pos.x + 15, pos.y -15);



    ofLog(OF_LOG_NOTICE,"the numbers are " + ofToString(v1) + ", " + ofToString(v2) + ", " + ofToString(v3));
    ofDrawTriangle(v1, v2, v3);

    
}

//------------------------------------------------------------------
void triangle::zenoToPoint(float catchX, float catchY){
    pos.x += (catchX - pos.x) / (catchX - pos.x+2);
    pos.y += (catchY - pos.y) / (catchY - pos.y+2);
    // pos.x += catchUpSpeed * (mouseX - pos.x);
    // pos.y += catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}
