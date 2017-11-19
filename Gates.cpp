
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
	firstInput = "";
	secondInput = "";
	output = "";
}

Gates::Gates(string first, string second, string out) {
	firstInput = first;
	secondInput = second;
	output = out;
}

void Gates::SetFirst(string firstToSet) {
  firstInput = firstToSet;
  return;
}

string Gates::GetFirst() const {
  return firstInput;
}

void Gates::SetSecond(string secondToSet) {
  secondInput = secondToSet;
  return;
}

string Gates::GetSecond() const {
  return secondInput;
}

void Gates::SetOutput(string outputToSet) {
  output = outputToSet;
  return;
}

string Gates::GetOutput() const {
  return output;
}

Gates::~Gates() {
}

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
	functionName = "f(" + GetOutput() + ") = ";
	cout << functionName;
	functionContents = GetFirst() + " X " + GetSecond();
	cout << functionContents;
	cout << endl << endl;
	return;
}
