#pragma once

#include "stdafx.h"
#include "ContainerBase.h"


class ContainerUI : ContainerBase
{
protected:
	std::string titel;

public:
	virtual void OnPaint() {}
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
};