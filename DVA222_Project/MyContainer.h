#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include <vector>

class MyContainer : public ControlUI
{
private:
	std::vector<ControlBase*> controls;
	std::string titel;

public:

	MyContainer();
	MyContainer(int posX, int posY, int width, int height, Color c);

	~MyContainer();

	void Add(ControlBase* toAdd);

	void OnPaint();
	void OnLoaded();
	void OnMouseDown(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
};