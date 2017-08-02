/*
 * TestClass.cpp
 *
 *  Created on: 02 Aug 2017
 *      Author: marek
 */

#include "TestClass.h"
#include <iostream>

TestClass::TestClass(double l, double w) {
	dLength = l;
	dWidth = w;
}

TestClass::~TestClass() {
}

void TestClass::printSomeShit() {
	std::cout << "Length of testobject: " << this->dLength << std::endl;
	std::cout << "Width of testobject: " << this->dWidth << std::endl;
}
