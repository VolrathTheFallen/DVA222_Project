#include "StdAfx.h"
#include "MyImageBox.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;

MyImageBox::MyImageBox()
{

}

MyImageBox::MyImageBox(int locX, int locY, int width, int height)
	: ControlUI(locX, locY, width, height, Color())
{
	
}

MyImageBox::~MyImageBox()
{
}

//This is called whenever the application wants to redraw its contents. We have already set it to 30 fps. You cannot change that
void MyImageBox::OnPaint()
{
	DrawBitmap(*image, X, Y, Width, Height);
}

//Is called once, when the object is being loaded
void MyImageBox::OnLoaded()
{
	image = new Bitmap("smiley.bmp");

}