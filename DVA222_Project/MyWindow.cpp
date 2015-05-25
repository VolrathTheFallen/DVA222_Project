#include "stdafx.h"
#include "MyWindow.h"
#include "ContainerUI.h"


MyWindow::MyWindow()
{

}

MyWindow::MyWindow(int posX, int posY, int width, int height, Color bgColor, Color borderColor, string titel)
	:ContainerUI(posX, posY, width, height, bgColor, titel)
{
	borderClicked = false;
	this->borderColor = borderColor;
}

MyWindow::~MyWindow()
{
	for (int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

Color MyWindow::GetBorderColor()
{
	return borderColor;
}

void MyWindow::SetBorderColor(Color bc)
{
	borderColor = bc;
}

void MyWindow::OnPaint()
{
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each control in the window
	{
		controls.at(i)->SetRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y + 20));
		controls.at(i)->OnPaint();
	}

	glColor3f(borderColor.R / 255.0,  borderColor.G/ 255.0, borderColor.B / 255.0);
	FillRectangle(X + X + relativePos.X, Y + relativePos.Y, Width, 20);
	glColor3f(0 / 255.0, 0 / 255.0, 0 / 255.0);
	DrawRectangle(X + relativePos.X, Y + relativePos.Y, Width, 20);
	DrawString(titel, X + relativePos.X + 5, Y + relativePos.Y + 14);
}

void MyWindow::OnMouseDown(int button, int x, int y)
{
	if (x > X + relativePos.X && x < X + relativePos.X + Width  && y>Y + relativePos.Y && y < Y + relativePos.Y + 20 && button == MOUSE_LEFT) // To avoid unecessary OnMouseDown calls outside container
	{
		if (!borderClicked)
		{ 
			prevX = x;
			prevY = y;
		}
		
		borderClicked = true;
	}

	for (int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
	{
		controls.at(i)->OnMouseDown(button, x, y);
	}
}

void MyWindow::OnMouseUp(int button, int x, int y)
{
	borderClicked = false;



	for (int i = 0; i < controls.size(); i++)		//Call OnMouseUp() for each control in the container 
	{
		//controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnMouseUp(button, x, y);
	}

	prevX = 0;
	prevY = 0;


}

void MyWindow::OnMouseMove(int button, int x, int y)
{
	if (borderClicked)
	{
		int deltaX = prevX - x;
		int deltaY = prevY - y;

		X -= deltaX;
		Y -= deltaY;
	}

	for (int i = 0; i < controls.size(); i++)		//Call OnMouseMove() for each control in the container 
	{
		//controls.at(i)->SetRelativePos(Point(this->X, this->Y)); 
		controls.at(i)->OnMouseMove(button, x, y);
	}
	prevX = x;
	prevY = y;
}