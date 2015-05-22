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
	for (int i = 0; i < radioButtons.size(); i++)
		delete(radioButtons.at(i));
}

void MyRadioButtonGroup::Add(MyRadioButton* toAdd)
{
	radioButtons.push_back(toAdd);
}

void MyRadioButtonGroup::OnPaint()
{
	FillRectangle(X, Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + 1, Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < radioButtons.size(); i++)		//Call OnPaint() for each radioButton in the container
	{
		radioButtons.at(i)->SetRelativePos(Point(this->X, this->Y));
		radioButtons.at(i)->OnPaint();
	}
}