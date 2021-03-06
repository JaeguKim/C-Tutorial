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
			cout << "Copy constructor running!" << endl;
			name = other.name;
			age = other.age;

			cout << name << " " << age << endl;
	}

	Person(string name, int age) : name(name), age(age) {

	}

	void print() {
		cout << name << ": " << age << endl;
	}
};

int main() {

	map<int, Person> people;

	//map always sort keys in increasing order
	people[222] = Person("Mike", 40);
	people[111] = Person("Vicky", 30);
	people[33]= Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob",45)));
	people.insert(make_pair(55, Person("Sue", 34)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << ": " << flush;
		it->second.print();
	}

}
