#pragma once

#include "stdafx.h"
#include "ContainerUI.h"
#include "ControlUI.h"

class MyWindow : public ContainerUI
{
	MyWindow();
	MyWindow(int posX, int posY, int width, int height, Color c, string titel);

	~MyWindow();

	//void Add(ControlUI* );

	void OnPaint();
	//void OnLoaded();
/*
	void OnMouseDown(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);
	void OnMouseMove(int button, int x, int y);
*/
};