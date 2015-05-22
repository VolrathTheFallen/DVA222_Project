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
}

MyCheckBox::MyCheckBox(int posX, int posY, string content, Color c)
	:ControlUI(posX, posY, 12, 12, c)
{
	label = new MyLabel(X + Width + 3, Y + Height, content, c); //posX + width of checkbox and padding. Assuming horizontal orientation

	checked = false;
}

MyCheckBox::~MyCheckBox()
{
	delete(label);
}

void MyCheckBox::OnMouseDown(int button, int x, int y)
{

	if (x > X && x < X + Width && y>Y && y < Y + Height && button == MOUSE_LEFT)
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
		DrawRectangle(X, Y, Width, Height);
		FillRectangle(X+2, Y+3, Width - 5, Height - 5);
	}
	else
	{
		DrawRectangle(X, Y, Width, Height);
	}

	label->OnPaint();
}