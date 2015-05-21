#pragma once

#include "StdAfx.h"
#include "Graphix.h"
#include "glut.h"
#include "ControlUI.h"

using namespace std;

class MyButton : public ControlUI
{
public:
    //Bitmap objects that hold different images for different states of the Button
    //Remember that the images MUST be in 24bit BMP format (use paint if you have images in other format)
    //Also remember that the image width MUST be dividable by 4
    //Also remember that the images must be stored in the same location as your source files
	Bitmap *normal;
	Bitmap *hover;
    Bitmap *press;
	
	bool hit;
    bool pressed;
    
    MyButton();
    MyButton(int locX, int locY, int width, int height, Color c);

    ~MyButton();

    //The class is overriding the following Event Handlers inherited from the base class 
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnPaint();
	virtual void OnLoaded();
	void OnMouseDown(int button, int x, int y);
    void OnMouseUp(int button, int x, int y);
};