#include "myTester.h"
#include <iostream>
using namespace std;
myTester::myTester(LinkedListOfInts& temp)
:m_temp(temp) 
{
}
myTester::~myTester()
{
}
void myTester::runTests()
{
	Test0();
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();
	Test8();
}
void myTester::Test0()
{
	string str = "FAILED";
	if(m_temp.isEmpty())
	{
		str = "PASSED";
	}
	cout<<"Test 0: isEmpty returns true when the linked list is empty: "<<str<<endl;
}
void myTester::Test1()
{
	string str = "FAILED";
	string str1 = "FAILED";
	if(m_temp.size()==0)
	{
		str = "PASSED";
	}
	if((m_temp.size()==!m_temp.isEmpty())&&(m_temp.size()==0))
	{
		str1 = "PASSED";
	}
	cout<<"Test 1: size of the empty list is zero: "<<str<<endl;
	cout<<"Test 1.5: both size and isEmpty indicate an empty linked list upon creation, implying that the constructor creates an empty linked list: "<<str1<<endl;
}
void myTester::Test2()
{
	string str = "FAILED";
	m_temp.addFront(5);
	if(m_temp.size()==1)
	{
		str = "PASSED";
	}
	cout<<"Test 2: size returns correct value after 1 addFront: "<<str<<endl;	
}
void myTester::Test3()
{
	string str = "FAILED";
	int CurrentSize = m_temp.size();
	m_temp.addBack(5);
	if(m_temp.size()==(CurrentSize+1))
	{
		str = "PASSED";
	}
	cout<<"Test 3: size returns correct value after 1 addBack: "<<str<<endl;
}	
void myTester::Test4()
{
	string str = "FAILED";
	m_temp.addFront(1);
	m_temp.addFront(2);
	m_temp.addFront(3);
	int tempSize = m_temp.size();
	m_temp.removeBack();
	if(tempSize == m_temp.size()-1)
	{
		str = "PASSED";
	}
	cout<<"Test 4: size returns correct value after 1 removeBack: "<<str<<endl;
}
void myTester::Test5()
{
	string str = "FAILED";
	m_temp.addFront(1);
	m_temp.addFront(2);
	m_temp.addFront(3);
	int tempSize = m_temp.size();
	vector<int> V1 = m_temp.toVector();
	m_temp.removeFront();
	vector<int> V2 = m_temp.toVector();
	if(tempSize == m_temp.size()-1)
	{
		str = "PASSED";
	}
	cout<<"Test 5: size returns correct value after 1 removeFront: "<<str<<endl;
}
void myTester::Test6()
{
	string str = "PASSED";
	vector<int> Vec1;
	vector<int> Vec2;
	m_temp.addBack(1);
	m_temp.addBack(2);
	Vec1 = m_temp.toVector();
	m_temp.addFront(3);
	m_temp.addFront(4);
	Vec2 = m_temp.toVector();
	if(m_temp.size()==Vec1.size()+2)
	{
		for(int i = Vec2.size()-1;i>1;i--)
		{
			if(Vec1[i-2]!=Vec2[i])
			{
				str = "FAILED";
			}
		}
		if(Vec2[0]!=4)
		{
			str = "FAILED";
		}
		if(Vec2[1]!=3)
		{
			str = "FAILED";
		}
	}
	else
	{
		str = "FAILED";
	}
	cout<<"Test 6: toVector returns a vector that is identical to the current linked list after two addFront calls: "<<str<<endl; 
}
void myTester::Test7()
{
	string str = "PASSED";
	vector<int> Vec1;
	vector<int> Vec2;
	m_temp.addBack(1);
	m_temp.addBack(2);
	Vec1 = m_temp.toVector();
	m_temp.addBack(3);
	m_temp.addBack(4);
	Vec2 = m_temp.toVector();
	if(m_temp.size()==Vec1.size()+2)
	{
		for(int i = 0; i<Vec1.size()-1;i++)
		{
			if(Vec1[i]!=Vec2[i])
			{
				str = "FAILED";
			}
		}
		if(Vec2[Vec2.size()-2]!=3)
		{
			str = "FAILED";
		}
		if(Vec2[Vec2.size()-1]!=4)
		{
			str = "FAILED";
		}
	}
	else
	{
		str = "FAILED";
	}
	cout<<"Test 7: toVector returns a vector that is identical to the current linked list after two addBack calls: "<<str<<endl; 
}

void myTester::Test8()
{
	string str = "FAILED";
	if((m_temp.search(1))&&(m_temp.search(2))&&(m_temp.search(3))&&(m_temp.search(4)))
	{
		str = "PASSED";
	}
	cout<<"Test 8: search returns true when searching for a value that already exists in the linked list: "<<str<<endl;
}

