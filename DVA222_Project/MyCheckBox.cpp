#include "stdafx.h"
#include "MyCheckBox.h"
#include "MyLabel.h"


MyCheckBox::MyCheckBox()
{
	label = new MyLabel();

	checked = false;
}

MyCheckBox::MyCheckBox(int posX, int posY, string content, Color c)
{
	label = new MyLabel(posX, posY, content, c); //posX + width of checkbox and padding. Assuming horizontal orientation

	checked = false;
}

MyCheckBox::~MyCheckBox()
{
	delete(label);
}

void MyCheckBox::OnMouseDown(int button, int x, int y)
{

	if (x > X && x < X + Width && y>Y && y < Y + Height && button == MOUSE_LEFT)
	{
		if (checked)
			checked == false;
		else
			checked == true;
	}
}

void MyCheckBox::OnPaint()
{

}