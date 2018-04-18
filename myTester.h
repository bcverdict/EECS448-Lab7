#ifndef MYTESTER_H
#define MYTESTER_H

#include "LinkedListOfInts.h"
#include <iostream>
class myTester
{
	public:
		myTester(LinkedListOfInts& temp);
		~myTester();
		void runTests();
		void Test0();
		void Test1();
		void Test2();
		void Test3();
		void Test4();
		void Test5();
		void Test6();
		void Test7();
		void Test8();
	private:
		LinkedListOfInts& m_temp;
};
#endif
