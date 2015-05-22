#include "stdafx.h"
#include "ContainerBase.h"
#include "ControlUI.h"

ContainerBase::ContainerBase()
{

}

ContainerBase::ContainerBase(int posX, int posY, int width, int height, Color c)
	:ControlUI(posX, posY, width, height, c)
{

}

ContainerBase::~ContainerBase()
{
	for ( int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void ContainerBase::OnPaint()
{
	//foreach(ControlBase* controlPointer in controls)	
	//  	controlPointer->OnPaint();

	for ( int i = 0; i < controls.size(); i++)		//Call OnPaint() for each control in the container 
	{
		controls.at(i)->SetRelativePos(Point(this->X,this->Y));
		controls.at(i)->OnPaint();
	}
}

void ContainerBase::OnLoaded()
{
	for ( int i = 0; i < controls.size(); i++)		//Call OnLoaded() for each control in the container 
	{
		controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnLoaded();
	}
}

void ContainerBase::OnMouseDown(int button, int x, int y)
{
	//if (x > X + relativePos.X && x < X + relativePos.X + Width  && y>Y + relativePos.Y && y < Y + relativePos.Y + Height  && button == MOUSE_LEFT) // To avoid unecessary OnMouseDown calls outside container
	//{
		for (int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
		{
			controls.at(i)->OnMouseDown(button, x, y);
		}
	//}
}

void ContainerBase::OnMouseUp(int button, int x, int y)
{
	for ( int i = 0; i < controls.size(); i++)		//Call OnMouseUp() for each control in the container 
	{
		//controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnMouseUp(button, x, y);
	}
}

void ContainerBase::OnMouseMove(int button, int x, int y)
{
	for ( int i = 0; i < controls.size(); i++)		//Call OnMouseMove() for each control in the container 
	{
		//controls.at(i)->SetRelativePos(Point(this->X, this->Y));
		controls.at(i)->OnMouseMove(button, x, y);
	}
}

void ContainerBase::Add(ControlUI* toAdd)
{
	controls.push_back(toAdd);
}