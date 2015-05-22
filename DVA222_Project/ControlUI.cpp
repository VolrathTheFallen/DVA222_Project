#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include "ControlBase.h"
#include "Graphix.h"


ControlUI::ControlUI()
{

}

ControlUI::ControlUI(int posX, int posY, int width, int height, Color c)
	:ControlBase(posX, posY, width, height)
{
	color = c;
	relativePos = Point(0, 0);
}

Color ControlUI::GetColor()
{
	return color;
}

void ControlUI::SetColor(Color c)
{
	color = c;
}