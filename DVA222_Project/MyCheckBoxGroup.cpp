#include "stdafx.h"
#include "MyCheckBoxGroup.h"

MyCheckBoxGroup::MyCheckBoxGroup()
{

}

MyCheckBoxGroup::MyCheckBoxGroup(int posX, int posY, int width, int height, Color c, string titel)
	:ContainerUI(posX, posY, width, height, c, titel)
{

}

MyCheckBoxGroup::~MyCheckBoxGroup()
{
	for ( int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void MyCheckBoxGroup::OnPaint()
{
	FillRectangle(X, Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + 1, Y + 1, Width -2, Height -2);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each checkbox in the container
	{
		controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnPaint();
	}
}

void MyCheckBoxGroup::Add(MyCheckBox* toAdd)
{
	controls.push_back(toAdd);
}