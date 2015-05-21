#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include "MyLabel.h"

class MyCheckBox : public ControlUI
{
private:
	MyLabel* label;

	bool checked;

public:

	MyCheckBox();
	MyCheckBox(int posX, int posY, string content, Color c);

	~MyCheckBox();

	void OnMouseDown(int button, int x, int y);
	void OnPaint();
};