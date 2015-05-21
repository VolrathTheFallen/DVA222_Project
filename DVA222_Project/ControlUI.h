#pragma once

#include "stdafx.h"
#include "ControlBase.h"

typedef struct _color
{
	_color()
	{
		R = 0;
		G = 0;
		B = 0;
	}
	_color(int r, int g, int b)
	{
		R = r;
		G = g;
		B = b;
	}
	int R;
	int G;
	int B;
}Color;

class ControlUI : public ControlBase
{
protected:
	Color color;
	//string name;
	//string text;

	void SetColor(Color c);
	Color GetColor(void);

public:

	ControlUI();
	ControlUI(int posX, int posY, int width, int height, Color c);
};




