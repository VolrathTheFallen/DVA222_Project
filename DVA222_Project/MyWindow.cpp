#include "stdafx.h"
#include "MyWindow.h"
#include "ContainerUI.h"


MyWindow::MyWindow()
{

}

MyWindow::MyWindow(int posX, int posY, int width, int height, Color c, string titel);
	:ContainerUI(posX, posY, width, height, c, titel)
{

}

MyWindow::~MyWindow()
{
	for (int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void ContainerBase::OnPaint()
{

}

void ContainerBase::OnLoaded()
{

}

void ContainerBase::OnMouseDown(int button, int x, int y)
{

}

void ContainerBase::OnMouseUp(int button, int x, int y)
{

}

void ContainerBase::OnMouseMove(int button, int x, int y)
{

}

void ContainerBase::Add(ControlUI* toAdd)
{
	controls.push_back(toAdd);
}