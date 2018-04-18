/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "myTester.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	myTester TestSuite(testableList);

	std::cout << "Running..."<<std::endl;
	TestSuite.runTests();
	std::cout<<"And it's done.\nGoodbye.\n";

	return (0);

}
