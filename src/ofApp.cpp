#include "ofApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(255);
    

	// set the position of the rectangle:
    myCircle.pos.x = 20;
    myCircle.pos.y = 20;
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    myTriangle.pos.x = 100;
    myTriangle.pos.y = 100;
    
    fbo.allocate(ofGetWindowWidth(), ofGetWindowHeight(), GL_RGBA32F);

}

//--------------------------------------------------------------
void ofApp::update(){
	myRectangle.zenoToPoint(mouseX, mouseY);
    myCircle.zenoToPoint(mouseX, mouseY);
    myTriangle.zenoToPoint(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(255,2);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofDrawRectangle(0, 0, ofGetWindowWidth(),ofGetHeight());
	myRectangle.draw();
    myCircle.draw();
    myTriangle.draw();
    fbo.end();
    fbo.draw(0,0);
}
