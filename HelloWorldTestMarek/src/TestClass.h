/*
 * TestClass.h
 *
 *  Created on: 02 Aug 2017
 *      Author: marek
 */

#ifndef TESTCLASS_H_
#define TESTCLASS_H_

class TestClass {
	double dLength;
	double dWidth;
public:
	TestClass(double l, double w);
	virtual ~TestClass();
	void printSomeShit();
};

#endif /* TESTCLASS_H_ */
