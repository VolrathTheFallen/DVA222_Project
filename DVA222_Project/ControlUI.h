#pragma once

#include "stdafx.h"
#include "ControlBase.h"
#include "Graphix.h"

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

	Point relativePos;

	int Z;

public:

	Point GetRelativePos();
	void SetRelativePos(Point p);
	ControlUI();
	ControlUI(int posX, int posY, int width, int height, Color c);

	void SetColor(Color c);
	Color GetColor(void);
	void SetZ(int z);
	int GetZ();

	static bool CompareZ(ControlUI* first, ControlUI* second);
	static void SwapZ(ControlUI* first, ControlUI* second);
};




