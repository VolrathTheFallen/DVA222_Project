#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include <vector>

class ContainerBase : public ControlUI
{
protected:
	std::vector<ControlUI*> controls;

	int counter;

public:

	ContainerBase();
	ContainerBase(int posX, int posY, int width, int height, Color c);

	~ContainerBase();

	void Add(ControlUI* toAdd);

	virtual void OnPaint();
	void OnLoaded();
	virtual void OnMouseDown(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);

	//friend class MyWindow;
};