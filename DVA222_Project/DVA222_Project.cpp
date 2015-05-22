// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "MyImageBox.h"
#include "MyLabel.h"
#include "MyContainer.h"
#include "MyCheckBoxGroup.h"
#include "MyCheckBox.h"
#include "MyRadioButton.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is created and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    
	ControlBase* button = new MyButton(20,20,190,60, Color());

	ControlBase* image = new MyImageBox(500, 500, 100, 100);

	ControlBase* label = new MyLabel(400, 300, "Label Test.", Color(255, 0, 0));

	MyContainer* container = new MyContainer(10, 10, 700, 500, Color());

	MyCheckBox* checkBox = new MyCheckBox(200, 100, "Test checkbox", Color());

	MyCheckBoxGroup* checkBoxGroup = new MyCheckBoxGroup(10, 300, 100, 100, Color(255, 255, 255));
	checkBoxGroup->Add(new MyCheckBox(10,10, "Testar", Color()));
	checkBoxGroup->Add(new MyCheckBox(30, 50, "Testar2", Color()));


	MyRadioButton* radiobutton = new MyRadioButton(200, 200, "Test radiobutton", Color(0, 150, 150));

	container->Add(checkBoxGroup);
	container->Add((ControlUI*)button);
	container->Add((ControlUI*)label);
	container->Add((ControlUI*)image);
	container->Add(checkBox);
	container->Add(radiobutton);


	//InitOGL(argc, argv, button);

	InitOGL(argc, argv, (ControlBase*) container);

    delete button;
	delete label;
	delete checkBox;
	delete container;

	return 0;
}

