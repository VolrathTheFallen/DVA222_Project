#pragma once

#include "stdafx.h"
#include "ContainerUI.h"
#include "ControlUI.h"

class MyWindow : public ContainerUI
{
protected:
	bool borderClicked;
	int prevX;
	int prevY;
	Color borderColor;

public:
	MyWindow();
	MyWindow(int posX, int posY, int width, int height, Color bgColor, Color border,  string titel);

	~MyWindow();

	void OnPaint();

	Color GetBorderColor();
	void SetBorderColor(Color bc);

	void OnMouseDown(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);
	void OnMouseMove(int button, int x, int y);
};