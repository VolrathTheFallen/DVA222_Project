#pragma once

#include "stdafx.h"
#include "ControlUI.h"
#include "Graphix.h"


class MyLabel : public ControlUI
{
private:
	string text;
	void DrawLabel();

public:

	MyLabel();
	MyLabel(int posX, int posY, string content);
	MyLabel(int posX, int posY, string content, Color c);
	
	string GetText();
	void SetText(string s);
	void OnPaint();
};