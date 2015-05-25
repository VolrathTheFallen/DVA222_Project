#include "stdafx.h"
#include "ContainerBase.h"
#include "MyPanel.h"


MyPanel::MyPanel()
{

}

MyPanel::MyPanel(int posX, int posY, int width, int height, Color color)
	:ContainerBase(posX, posY, width, height, color)
{

}

void MyPanel::OnPaint()
{
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);

	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each checkbox in the container
	{
		controls.at(i)->SetRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y + 20));
		controls.at(i)->OnPaint();
	}

}