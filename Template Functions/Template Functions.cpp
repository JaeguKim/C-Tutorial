/*
 * Template Functions.cpp
 *
 *  Created on: 2018. 5. 7.
 *      Author: jaegu
 */

#include <iostream>
using namespace std;

template<class T>
void print(T n) {
	cout << n << endl;
}

int main() {
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	return 0;
}



