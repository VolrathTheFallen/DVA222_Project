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
#include "MyWindow.h"
#include "MyPanel.h"


using namespace std;


int _tmain(int argc, char** argv)
{
	//A new object of Button type is created and passed to the InitOGL function. 
	//From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
	//This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
	//------------------------------------------------------------------------------------------------------------------------------------

	MyWindow* window = new MyWindow(10, 10, 750, 550, Color(230, 230, 230), Color(255, 255, 255), "New window");



	ControlUI* label = new MyLabel(10, 20, "label is label spelled backwards", Color());
	window->Add(label);

	MyCheckBoxGroup* checkBoxGroup = new MyCheckBoxGroup(10, 40, 300, 150, Color(255, 255, 100), "checkBoxGroup1");
	checkBoxGroup->Add(new MyCheckBox(10, 10, "CheckBoxTest 1", Color()));
	checkBoxGroup->Add(new MyCheckBox(10, 30, "CheckBoxTest 2", Color()));
	checkBoxGroup->Add(new MyCheckBox(10, 50, "CheckBoxTest 3", Color()));
	window->Add((ControlUI*)checkBoxGroup);

	MyRadioButtonGroup* radioButtonGroup = new MyRadioButtonGroup(320, 40, 300, 150, Color(100, 255, 255), "radioButtonGroup1");
	radioButtonGroup->Add(new MyRadioButton(10, 10, "RadioButton Test 1", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 30, "RadioButton Test 2", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 50, "RadioButton Test 3", Color()));
	radioButtonGroup->Add(new MyRadioButton(10, 70, "RadioButton Test 4", Color()));
	window->Add((ControlUI*)radioButtonGroup);

	MyRadioButton* freeRadioButton = new MyRadioButton(10, 200, "I am a radiobutton and I am free like a bird", Color());
	window->Add(freeRadioButton);

	MyCheckBox* freeCheckBox = new MyCheckBox(10, 220, "I'm a checkbox and I am free:er than you.", Color());
	window->Add(freeCheckBox);

	ControlUI* image = new MyImageBox(10, 320, 100, 100);
	window->Add(image);

	MyPanel* panel = new MyPanel(380, 200, 300, 200, Color(0, 255, 0));
	ControlUI* label2 = new MyLabel(10, 10, "Label on a panel", Color(255, 255, 255));
	panel->Add(label2);

	MyPanel* panel2 = new MyPanel(350, 250, 300, 200, Color(40, 200, 0));
	ControlUI* label3 = new MyLabel(0, 0, "Another label on a panel", Color(255, 255, 255));
	ControlUI* button = new MyButton(10, 20, 150, 60, Color());
	panel2->Add(label3);
	panel->Add(button);

	

	window->Add(panel2);
	window->Add(panel);

	window->BringToFront(panel);

	InitOGL(argc, argv, window);


	return 0;
}