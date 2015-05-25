#pragma once

#include "stdafx.h"
#include "ContainerBase.h"


class ContainerUI : public ContainerBase
{
protected:
	std::string titel;

public:
	ContainerUI();
	ContainerUI(int posX, int posY, int width, int height, Color c, string titel);
};