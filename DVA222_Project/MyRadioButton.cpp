#include "stdafx.h"
#include "MyRadioButton.h"


MyRadioButton::MyRadioButton()
{}

MyRadioButton::MyRadioButton(int posX, int posY, string content, Color color)
	:MyCheckBox(posX, posY, content, color)
{

}


void MyRadioButton::OnPaint()
{
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);	//Set color

	if (checked)
	{
		//DrawRectangle(X, Y, Width, Height);
		//FillRectangle(X + 2, Y + 3, Width - 5, Height - 5);

		DrawCircle(X+6, Y+8, Width / 1.5);
		FillRectangle(X + 2, Y + 6, Width / 2, Height / 2);
	}
	else
	{
		DrawCircle(X+6, Y+8, Width / 1.5);
		//DrawRectangle(X, Y, Width, Height);
	}

	label->OnPaint();
}

