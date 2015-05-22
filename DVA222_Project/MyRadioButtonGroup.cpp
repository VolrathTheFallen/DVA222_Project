#include "stdafx.h"
#include "MyRadioButtonGroup.h"
#include "Graphix.h"

MyRadioButtonGroup::MyRadioButtonGroup()
{
}

MyRadioButtonGroup::MyRadioButtonGroup(int posX, int posY, int width, int height, Color c)
{

}

MyRadioButtonGroup::~MyRadioButtonGroup()
{
	for (int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void MyRadioButtonGroup::Add(MyRadioButton* toAdd)
{
	controls.push_back(toAdd);
}

void MyRadioButtonGroup::OnPaint()
{
	FillRectangle(X, Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + 1, Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each radioButton in the container
	{
		controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnPaint();
	}
}