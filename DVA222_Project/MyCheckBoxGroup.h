#pragma once

#include "stdafx.h"
#include "ContainerUI.h"
#include "MyCheckBox.h"
#include <vector>

class MyCheckBoxGroup : public ContainerUI
{
private:
	//std::vector<MyCheckBox*> checkBoxes;

public:

	MyCheckBoxGroup();
	MyCheckBoxGroup(int posX, int posY, int width, int height, Color c, string titel);

	~MyCheckBoxGroup();

	void Add(MyCheckBox* toAdd);

	void OnPaint();
	//void OnLoaded();

};