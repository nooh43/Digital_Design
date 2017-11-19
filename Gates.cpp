
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
void Gates::PrintGate() const {
	cout << "        __________" << endl;
	cout << "       |          |" << endl;
	cout << "  " << GetFirst() <<" -->|          |" << endl;
	cout << "       |    M1    |--> " << GetOutput() << endl;
	cout << "  " << GetSecond() <<" -->|          |" << endl;
	cout << "       |__________|" << endl;
	return;
}

void Gates::Calculate() const {
	string functionName;
	string functionContents;
	string typeOfBox;

	if (GetType().substr(0, 1) == "M" || GetType().substr(0, 1) == "m") {
		typeOfBox = "M";
		functionName = "f(" + GetOutput() + ") = ";
		cout << functionName;
		functionContents = GetFirst() + " X " + GetSecond();
		cout << functionContents;
		cout << endl << endl;
	}
	else {
		typeOfBox = "NM";
		functionName = "f(" + GetOutput() + ") = ";
		cout << functionName;
		functionContents = "1 - " + GetFirst() + " X " + GetSecond();
		cout << functionContents;
		cout << endl << endl;
	}

	return;
}
