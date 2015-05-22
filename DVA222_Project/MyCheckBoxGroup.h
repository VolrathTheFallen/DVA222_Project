#pragma once

#include "stdafx.h"
#include "MyContainer.h"
#include "MyCheckBox.h"
#include <vector>

class MyCheckBoxGroup : public MyContainer
{
private:
	std::vector<MyCheckBox*> checkBoxes;

public:

	MyCheckBoxGroup();
	MyCheckBoxGroup(int posX, int posY, int width, int height, Color c);

	~MyCheckBoxGroup();

	void Add(MyCheckBox* toAdd);

	void OnPaint();
	//void OnLoaded();

};