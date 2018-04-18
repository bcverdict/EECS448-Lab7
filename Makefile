#	Author: John Gibbons modified by Alex Bardas
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o myTester.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o myTester.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

myTester.o: myTester.cpp myTester.h
	g++ -g -Wall -std=c++11 -c myTester.cpp
#Add needed Test.o recipe and compiler command

#DON'T delete LinkedList.o!
clean:
	rm main.o myTester.o *.*~ prog
