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

}