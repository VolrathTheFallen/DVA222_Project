#pragma once

#include "stdafx.h"
#include "ContainerBase.h"
#include "MyRadioButton.h"

class MyRadioButtonGroup : public ContainerBase
{
private:
	//std::vector<MyRadioButton*> radioButtons;
	int indexOfSelected;

public:

	MyRadioButtonGroup();
	MyRadioButtonGroup(int posX, int posY, int width, int height, Color c);

	~MyRadioButtonGroup();

	void Add(MyRadioButton* toAdd);
	void OnMouseDown(int button, int x, int y);

	void OnPaint();
	//void OnLoaded();
};