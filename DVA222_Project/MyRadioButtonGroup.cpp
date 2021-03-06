#include "stdafx.h"
#include "MyRadioButtonGroup.h"
#include "Graphix.h"
#include "MyCheckBox.h"
#include "MyRadioButton.h"

MyRadioButtonGroup::MyRadioButtonGroup()
{
}

MyRadioButtonGroup::MyRadioButtonGroup(int posX, int posY, int width, int height, Color c, string titel)
	:ContainerUI(posX, posY, width, height, c, titel)
{
	indexOfSelected = -1;
}

MyRadioButtonGroup::~MyRadioButtonGroup()
{
	for (int i = 0; i < controls.size(); i++)
		delete(controls.at(i));
}

void MyRadioButtonGroup::OnPaint()
{
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < controls.size(); i++)		//Call OnPaint() for each radioButton in the container
	{
		controls.at(i)->SetRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y + 20));
		controls.at(i)->OnPaint();
	}

	DrawString(titel, X + relativePos.X + 5, Y + relativePos.Y + 14);

}

void MyRadioButtonGroup::Add(MyRadioButton* toAdd)
{
	controls.push_back(toAdd);
}

void MyRadioButtonGroup::OnMouseDown(int button, int x, int y)
{

	MyRadioButton *tmp;
	for (int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
	{
		tmp = static_cast<MyRadioButton *>(controls.at(i));
		tmp->SetChecked(false);
	}

	for (int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
	{
		controls.at(i)->OnMouseDown(button, x, y);
	}

	for (int i = 0; i < controls.size(); i++)		//Call OnMouseDown() for each control in the container 
	{
		tmp = static_cast<MyRadioButton *>(controls.at(i));
		if (tmp->GetChecked())
			indexOfSelected = i;

	}

	if (indexOfSelected == -1)
		return;

	tmp = static_cast<MyRadioButton *>(controls.at(indexOfSelected));
	tmp->SetChecked(true);
}