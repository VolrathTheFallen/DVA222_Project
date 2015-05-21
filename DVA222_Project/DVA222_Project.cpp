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
#include "MyCheckBox.h"

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

	MyCheckBox* checkbox = new MyCheckBox(200, 100, "Test checkbox", Color());

	container->Add(button);
	container->Add(label);
	container->Add(image);
	container->Add(checkbox);


	//InitOGL(argc, argv, button);

	InitOGL(argc, argv, (ControlBase*) container);

    delete button;
	delete label;
	delete checkbox;
	delete container;

	return 0;
}

