//============================================================================
// Name        : Overloading.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {

	Complex c1(3,2);
	Complex c2(3,4);

	if (c1 == c2) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}

	if (c1 != c2) {
		cout << "Not Equal" << endl;
	} else {
		cout << "Equal" << endl;
	}

	return 0;
}
