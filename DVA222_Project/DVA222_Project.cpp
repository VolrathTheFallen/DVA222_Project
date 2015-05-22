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
#include "MyRadioButtonGroup.h"
#include "MyCheckBox.h"
#include "MyRadioButton.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is created and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    
	//MyWindow* window = new ...

	//MyContainer* container = new MyContainer(10, 10, 700, 500, Color());

	//ControlUI* button = new MyButton(10,10,150,60, Color());
	//ControlUI* image = new MyImageBox(500, 500, 100, 100);
	//ControlUI* label = new MyLabel(400, 300, "Label Test.", Color(255, 0, 0));

	MyCheckBoxGroup* checkBoxGroup = new MyCheckBoxGroup(150, 150, 300, 300, Color(255, 255, 255));
	checkBoxGroup->Add(new MyCheckBox(10, 10, "CheckBoxTest 1", Color()));
	checkBoxGroup->Add(new MyCheckBox(10, 30, "CheckBoxTest 2", Color()));
	MyCheckBox* checkBox = new MyCheckBox(10, 50, "CheckBoxTest 3", Color());
	checkBoxGroup->Add(checkBox);

	//MyRadioButtonGroup* radioButtonGroup = new...
	//radioButtonGroup->Add(...
	//MyRadioButtonGroup* radioButton = new MyRadioButton(200, 200, "Test radiobutton", Color(0, 150, 150)); // delete this after?

	/*container->Add(button);
	container->Add(image);
	container->Add(label);
	container->Add(checkBoxGroup);*/
//	container->Add(radioButton);


	InitOGL(argc, argv, (ControlBase*) checkBoxGroup);

    /*delete button;
	delete label;
	delete container;*/

	return 0;
}

