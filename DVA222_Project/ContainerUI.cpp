#include "stdafx.h"
#include "ContainerBase.h"
#include "ContainerUI.h"


ContainerUI::ContainerUI()
{

}

ContainerUI::ContainerUI(int posX, int posY, int width, int height, Color c, string titel)
	:ContainerBase(posX, posY, width, height, c)
{
	this->titel = titel;
}