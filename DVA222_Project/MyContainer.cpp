#include "stdafx.h"
#include "MyContainer.h"

MyContainer::MyContainer()
{

}

MyContainer::MyContainer(int posX, int posY, int width, int height, Color c)
	:ControlUI(posX, posY, width, height, c)
{
	relativePos = Point(0, 0);
}

MyContainer::~MyContainer()
{

}

void MyContainer::OnPaint()
{
	//foreach(ControlBase* controlPointer in controls)	
	//  	controlPointer->OnPaint();

	for (signed int i = 0; i < controls.size(); i++)		//Call OnPaint() for each control in the container 
		controls.at(i)->OnPaint();
}

void MyContainer::OnLoaded()
{
	for (signed int i = 0; i < controls.size(); i++)		//Call OnLoaded() for each control in the container 
		controls.at(i)->OnLoaded();
}

void MyContainer::OnMouseDown(int button, int x, int y)
{
	for (signed int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
		controls.at(i)->OnMouseDown(button, x, y);
}

void MyContainer::OnMouseUp(int button, int x, int y)
{
	for (signed int i = 0; i < controls.size(); i++)		//Call OnMouseUp() for each control in the container 
		controls.at(i)->OnMouseUp(button, x, y);
}

void MyContainer::OnMouseMove(int button, int x, int y)
{
	for (signed int i = 0; i < controls.size(); i++)		//Call OnMouseMove() for each control in the container 
		controls.at(i)->OnMouseMove(button, x, y);
}

void MyContainer::Add(ControlBase* toAdd)
{
	controls.push_back(toAdd);
}