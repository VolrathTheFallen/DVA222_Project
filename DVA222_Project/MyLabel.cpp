#pragma once

#include "stdafx.h"
#include "MyLabel.h"
#include "Graphix.h"


MyLabel::MyLabel()
{
}

MyLabel::MyLabel(int posX, int posY, string content)
	:ControlUI(posX, posY, 0, 0, Color())
{
	text = content;
}

MyLabel::MyLabel(int posX, int posY, string content, Color c)
	:ControlUI(posX, posY, 0, 0, c)
{
	text = content;
}

string MyLabel::GetText()
{
	return text;
}

void MyLabel::SetText(string s)
{
	text = s;
}

void MyLabel::OnPaint()
{
	this->DrawLabel();
}

void MyLabel::DrawLabel()
{
	glColor3f(color.R / 255.0, color.G / 255.0, color.B / 255.0);
	//Graphix::SetColor(color.R, color.G, color.B);

	DrawString(text, X, Y);
}