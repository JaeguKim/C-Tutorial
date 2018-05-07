//============================================================================
// Name        : Custom.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;

public:

	Person():name(""), age(0) {

	}

	Person(const Person &other) {
			name = other.name;
			age = other.age;
	}

	Person(string name, int age) : name(name), age(age) {

	}

	void print() const {
		cout << name << ": " << age << flush;
	}

	bool operator<(const Person &other) const {

		if (name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}
	}
};

int main() {

	map<Person, int> people;

	//map always sort keys in increasing order
	people[Person("Mike",40)] = 40;
	people[Person("Mike", 444)] = 123;
	people[Person("Sue",30)] = 30;
	people[Person("Raj",20)] = 20;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}

	return 0;
}
