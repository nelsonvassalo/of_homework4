//
//  circle.h
//  Homework4_zeno
//
//  Created by Nelson on 20/02/17.
//
//

#ifndef circle_h
#define circle_h



#include "ofMain.h"

class circle {
public:
    circle();
    void	draw();
    void	zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed
    ofFbo fbo;
    
};


#endif /* circle_h */

