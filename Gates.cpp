
/*
 * function.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: Nasser Alhumood
 */
using namespace std;

/* Libraries included */
#include <iostream>
#include "Gates.h"
#include <fstream>
using std::ofstream;
using std::ios;

Gates::Gates() {
	type = "";
	firstInput = "";
	secondInput = "";
	output = "";
}

Gates::Gates(string typ,string first, string second, string out) {
	type = typ;
	firstInput = first;
	secondInput = second;
	output = out;
}

Gates::~Gates() {
}

/* Setters */
void Gates::SetType(string typeToSet) {
  type = typeToSet;
  return;
}

void Gates::SetFirst(string firstToSet) {
  firstInput = firstToSet;
  return;
}

void Gates::SetSecond(string secondToSet) {
  secondInput = secondToSet;
  return;
}

void Gates::SetOutput(string outputToSet) {
  output = outputToSet;
  return;
}

/* Getters */
string Gates::GetType() const {
  return type;
}

string Gates::GetFirst() const {
  return firstInput;
}

string Gates::GetSecond() const {
  return secondInput;
}

string Gates::GetOutput() const {
  return output;
}

/* Helpers */
void Gates::Calculate() const {
	/* Parameters */
	string functionContents;
	string typeOfBox;

	/* Equations File */
	ofstream equationsF;
	equationsF.open("equations.txt", ios::app);

	/* Printed File */
	ofstream printedF;
	printedF.open("printed.txt", ios::app);

	/* If it is an M Gate */
	if (GetType().substr(0, 1) == "M" || GetType().substr(0, 1) == "m") {
		/* initializing the type */
		typeOfBox = "M";
		/* Writing out the function */
		functionContents = GetOutput() + " = " + GetFirst() + "." + GetSecond();
	}

	/* If it is an NM Gate */
	else {
		/* initializing the type */
		typeOfBox = "NM";
		/* Writing out the function */
		functionContents = GetOutput() + " = " + "1-(" + GetFirst() + "." + GetSecond() + ")";
	}

	/* saving the equation inside the file */
	equationsF << functionContents << endl;

	/* Printing the function a gate box */
	if (typeOfBox == "NM") {
		printedF << "        ________" << endl;
		printedF << "  " << GetFirst() <<" -->|        |" << endl;
		printedF << "       |   " << GetType() << "  |--> " << GetOutput() << endl;
		printedF << "  " << GetSecond() <<" -->|________|" << endl << endl;
	}
	else {
		printedF << "        ________" << endl;
		printedF << "  " << GetFirst() <<" -->|        |" << endl;
		printedF << "       |   " << GetType() << "   |--> " << GetOutput() << endl;
		printedF << "  " << GetSecond() <<" -->|________|" << endl << endl;
	}

	/* Closing the Files */
	equationsF.close();
	printedF.close();

	return;
}
