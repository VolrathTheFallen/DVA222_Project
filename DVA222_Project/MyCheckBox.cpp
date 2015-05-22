#include "stdafx.h"
#include "MyCheckBox.h"
#include "MyLabel.h"
#include "ControlBase.h"


MyCheckBox::MyCheckBox()
{
	X = 10;
	Y = 10;
	Width = 12;
	Height = 12;

	label = new MyLabel();

	checked = false;

	relativePos = Point(0, 0);
}

MyCheckBox::MyCheckBox(int posX, int posY, string content, Color c)
	:ControlUI(posX, posY, 12, 12, c)
{
	label = new MyLabel(X + Width + 3, Y + Height, content, c); //posX + width of checkbox and padding. Assuming horizontal orientation

	checked = false;

	relativePos = Point(0, 0);
}

MyCheckBox::~MyCheckBox()
{
	delete(label);
}

void MyCheckBox::OnMouseDown(int button, int x, int y)
{

	if (x > X + relativePos.X && x < X + Width + relativePos.X && y>Y + relativePos.Y && y < Y + Height + relativePos.Y && button == MOUSE_LEFT)
	{
		if (checked)
			checked = false;
		else
			checked = true;
	}
}

void MyCheckBox::OnPaint()
{

	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);	//Set color

	if (checked)
	{
		DrawRectangle(X + relativePos.X, Y + relativePos.Y, Width + relativePos.X, Height + relativePos.Y);
		FillRectangle(X + 2 + relativePos.X, Y + 3 + relativePos.Y, Width - 5 + relativePos.X, Height - 5 + relativePos.Y);
	}
	else
	{
		DrawRectangle(X + relativePos.X, Y + relativePos.Y, Width + relativePos.X, Height + relativePos.Y);
	}

	label->OnPaint();
}