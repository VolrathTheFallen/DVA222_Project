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

Point ControlUI::GetRelativePos()
{
	return relativePos;
}
void ControlUI::SetRelativePos(Point p)
{
	relativePos = p;
}

Color ControlUI::GetColor()
{
	return color;
}

void ControlUI::SetColor(Color c)
{
	color = c;
}

void ControlUI::SetZ(int z)
{
	Z = z;
}

int ControlUI::GetZ()
{
	return Z;
}

bool ControlUI::CompareZ(ControlUI* first, ControlUI* second)
{
	return (first->GetZ() < second->GetZ() ? true : false);
}


void ControlUI::SwapZ(ControlUI* first, ControlUI* second)
{
	int temp = first->GetZ();

	first->SetZ(second->GetZ());

	second->SetZ(temp);
}