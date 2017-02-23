//
//  circle.cpp
//  Homework4_zeno
//
//  Created by Nelson on 20/02/17.
//
//

#include "circle.h"

circle::circle() {
    catchUpSpeed = 0.01;
}

void circle::draw() {
    ofFill();
    
   
    ofSetColor(255,10);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofDrawRectangle(0, 0, ofGetWindowWidth(),ofGetHeight());
    ofSetColor(255,16,15);
    ofDrawCircle(pos.x, pos.y, 10);


}

//------------------------------------------------------------------
void circle::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    // pos.x += catchUpSpeed * (mouseX - pos.x);
    // pos.y += catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}



