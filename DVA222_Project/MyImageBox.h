#pragma once

#include "StdAfx.h"
#include "ControlUI.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;
class MyImageBox : public ControlUI
{
public:
	Bitmap *image;

	MyImageBox();
	MyImageBox(int locX, int locY, int width, int height);
	~MyImageBox();

	virtual void OnPaint();
	virtual void OnLoaded();

};