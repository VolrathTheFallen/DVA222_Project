#pragma once

#include "stdafx.h"
#include "MyCheckBox.h"

class MyRadioButton : public MyCheckBox
{
public:
	MyRadioButton();
	MyRadioButton(int posX, int posY, string content, Color color);

	void OnPaint();
	void SetChecked(bool b);
	bool GetChecked();
};