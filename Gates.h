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
	Gates(string ,string , string);
	virtual ~Gates();
	void SetFirst(string boxFirst);
	void SetSecond(string boxSecond);
	void SetOutput(string boxOutput);
	string GetFirst() const;
	string GetSecond() const;
	string GetOutput() const;
	void PrintGate() const;
	void Calculate() const;

/* Private data members */
private:
	string firstInput;
	string secondInput;
	string output;
};

#endif /* GATES_H_ */
