#pragma once

#include "stdafx.h"
#include "ContainerBase.h"

class MyPanel : public ContainerBase
{
public:

	MyPanel();
	MyPanel(int posX, int posY, int width, int height, Color color);

	void OnPaint();
};