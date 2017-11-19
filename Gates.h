/*
 * Gates.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Nasser Alhumood
 */
using namespace std;

/* Libraries included */
#include <iostream>

#ifndef GATES_H_
#define GATES_H_

class Gates {
/* Public member Functions */
public:
	Gates();
	Gates(string, string ,string , string);
	~Gates();
	/* Setters */
	void SetFirst(string boxFirst);
	void SetSecond(string boxSecond);
	void SetOutput(string boxOutput);
	void SetType(string boxType);
	/* Getters */
	string GetFirst() const;
	string GetSecond() const;
	string GetOutput() const;
	string GetType() const;
	/* Helpers */
	void Calculate() const;

/* Private data members */
private:
	string type;
	string firstInput;
	string secondInput;
	string output;
};

#endif /* GATES_H_ */
