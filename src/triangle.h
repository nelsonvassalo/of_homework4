//
//  triangle.h
//  Homework4_zeno
//
//  Created by Nelson on 20/02/17.
//
//

#ifndef triangle_h
#define triangle_h



#include "ofMain.h"

class triangle {
    public:
    triangle();
    void	draw();
    void	zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed
    ofFbo fbo;
};




#endif /* triangle_hpp */



