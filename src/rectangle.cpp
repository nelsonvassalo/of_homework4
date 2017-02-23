#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){
	catchUpSpeed = 0.05f;
    
}

//------------------------------------------------------------------
void rectangle::draw() {
    
	ofFill();
    ofSetColor(198,246,55);
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofDrawRectangle(pos.x, pos.y, 20,20);
    
    
    
}

//------------------------------------------------------------------
void rectangle::zenoToPoint(float catchX, float catchY){
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
     // pos.x += catchUpSpeed * (mouseX - pos.x);
    // pos.y += catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;

}


