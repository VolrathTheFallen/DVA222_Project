// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "MyImageBox.h"
#include "MyLabel.h"
#include "ContainerBase.h"
#include "ContainerUI.h"
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

	ContainerBase* container = new ContainerBase(10, 10, 700, 500, Color());

	//ControlUI* button = new MyButton(10,10,150,60, Color());
	//ControlUI* image = new MyImageBox(500, 500, 100, 100);
	//ControlUI* label = new MyLabel(400, 300, "Label Test.", Color(255, 0, 0));

	MyCheckBoxGroup* checkBoxGroup = new MyCheckBoxGroup(75, 150, 300, 300, Color(255, 255, 255), "checkBoxGroup1");
	checkBoxGroup->Add(new MyCheckBox(10, 10, "CheckBoxTest 1", Color()));
	checkBoxGroup->Add(new MyCheckBox(10, 30, "CheckBoxTest 2", Color()));
	MyCheckBox* checkBox = new MyCheckBox(10, 50, "CheckBoxTest 3", Color());
	checkBoxGroup->Add(checkBox);

	MyRadioButtonGroup* radioButtonGroup = new MyRadioButtonGroup(380, 150, 300, 300, Color(255, 255, 255), "radioButtonGroup1");
	radioButtonGroup->Add(new MyRadioButton(10, 10, "RadioButton Test 1", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 30, "RadioButton Test 2", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 50, "RadioButton Test 3", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 70, "RadioButton Test 4", Color()));

	/*container->Add(button);
	container->Add(image);
	container->Add(label);
	container->Add(checkBoxGroup);*/
//	container->Add(radioButton);

	container->Add((ControlUI*)checkBoxGroup);
	container->Add((ControlUI*)radioButtonGroup);

	InitOGL(argc, argv, (ControlBase*)container);

    /*delete button;
	delete label;
	delete container;*/

	return 0;
}

