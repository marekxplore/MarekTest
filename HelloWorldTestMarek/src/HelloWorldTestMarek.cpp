//============================================================================
// Name        : HelloWorldTestMarek.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SecondFile.h"
#include "TestClass.h"

using namespace std;

void spielereiFunction() {
	TestClass testobject (3.14, 4.20);
	testobject.printSomeShit();
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Luntemans" << endl; // prints who you really are
	cout << "Testing and testing" << endl;

	MyFunction();
	double test;
	test = MySecondFunction();
	cout << "tested value: " << test << "." << endl;

	spielereiFunction();

	return 0;
}
