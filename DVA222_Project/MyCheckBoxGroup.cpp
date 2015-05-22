#include "stdafx.h"
#include "MyCheckBoxGroup.h"

MyCheckBoxGroup::MyCheckBoxGroup()
{

}

MyCheckBoxGroup::MyCheckBoxGroup(int posX, int posY, int width, int height, Color c)
	:MyContainer(posX, posY, width, height, c)
{

}

MyCheckBoxGroup::~MyCheckBoxGroup()
{

}

void MyCheckBoxGroup::OnPaint()
{
	FillRectangle(X, Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + 1, Y + 1, Width -2, Height -2);

	for (signed int i = 0; i < checkBoxes.size(); i++)		//Call OnPaint() for each checkbox in the container
	{
		checkBoxes.at(i)->SetRelativePos(Point(X, Y));
		checkBoxes.at(i)->OnPaint();
	}
}

void MyCheckBoxGroup::OnLoaded()
{
	for (signed int i = 0; i < checkBoxes.size(); i++)		//Call OnLoaded() for each checkbox in the container
	{
		checkBoxes.at(i)->SetRelativePos(Point(X, Y));
		checkBoxes.at(i)->OnLoaded();
	}

}

void MyCheckBoxGroup::Add(MyCheckBox* toAdd)
{
	checkBoxes.push_back(toAdd);
}