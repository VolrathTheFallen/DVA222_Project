#include "stdafx.h"
#include "MyWindow.h"
#include "ContainerUI.h"


MyWindow::MyWindow()
{

}

MyWindow::MyWindow(int posX, int posY, int width, int height, Color c, string titel)
	:ContainerUI(posX, posY, width, height, c, titel)
{

}

MyWindow::~MyWindow()
{
	for (int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void MyWindow::OnPaint()
{

	FillRectangle(X, Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + 1, Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each control in the window
	{
		controls.at(i)->SetRelativePos(Point(this->X, this->Y + 20));
		controls.at(i)->OnPaint();
	}

	DrawRectangle(X, Y, Width, 20);
	DrawString(titel, X + 5, Y + 14);

}