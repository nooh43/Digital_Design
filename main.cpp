
/*
 * main.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: Nasser Alhumood
 */
using namespace std;

/* Libraries included */
#include <iostream>
#include "Gates.h"

int main() {
	/* Main parameters */
	char desicion = 'y';
	string box;
	string boxName;
	string firstInput;
	string secondInput;
	string output;

	/* Welcoming to user to the application */
	cout << "Welcome!" << endl << endl;

	/* Asking if the user wants to add a new object */
	while (desicion == 'y') {

		/* First question */
		cout << "Would you like to add a new box ? ( Type 'y' for yes and 'n' for no )" << endl;
		cin >> desicion;
		cout << endl;

		/* If he agrees */
		if (desicion == 'y') {

			/* Naming the box */
			cout << "Please enter your box: ";
			cin >> box;
			cout << endl;

			/* Finding the box's name */
			boxName = box.substr(0, box.find('('));

			/* First input */
			firstInput = box.substr(box.find('(') + 1, box.find(',') - box.find('(') - 1);
			/* Second input */
			secondInput = box.substr(boxName.length() + firstInput.length() + 2, box.find(',' , (firstInput.length() +  boxName.length() + 2)) - (boxName.length() + firstInput.length() + 2));
			/* Find output */
			output = box.substr(boxName.length() + firstInput.length() + secondInput.length() + 3, box.length() - (boxName.length() + firstInput.length() + secondInput.length() + 4));

			/* initial an object */
			Gates boxName(firstInput, secondInput, output);
			boxName.Calculate();
			// boxName.PrintGate();
			// cout << endl << endl;

		}

		/* If he disagrees */
		else {
			cout << endl << endl << endl;
			cout << "Would you like to start over? ( Type 'y' for yes and 'n' for no )" << endl;
			cin >> desicion;
		}
	}

	/* Saying goodbye */
	cout << "Thank you for using this application, enjoy the rest of your day. Goodbye!";

	return 0;
}
