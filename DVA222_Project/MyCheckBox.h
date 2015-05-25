#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include "MyLabel.h"

class MyCheckBox : public ControlUI
{
protected:
	MyLabel* label;

	bool checked;

public:

	MyCheckBox();
	MyCheckBox(int posX, int posY, string content, Color c);

	~MyCheckBox();

	bool GetChecked();
	void SetChecked(bool v);

	void OnMouseDown(int button, int x, int y);
	virtual void OnPaint();
	
};