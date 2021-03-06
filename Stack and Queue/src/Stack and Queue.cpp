//============================================================================
// Name        : Stack.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
	string name;

public:
	Test(string name) : name(name) {

	}

	~Test() {

	}

	void print() {
		cout << name << endl;
	}
};

int main() {

	// LIFO
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));
	cout << endl;

	/*
	 * This is invalid code! Object is destroyed.
	 Test &test1 = testStack.top();
	 testStack.pop();
	 test1.print(); // Reference refers to destroyed object
	 */

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;

	// FIFO
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	testQueue.back().print();

	while (testQueue.size() > 0) {
			Test &test = testQueue.front();
			test.print();
			testQueue.pop();
		}

	cout << endl;

	return 0;
}
