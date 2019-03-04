/*
 * Write a short C++ program that checks if 3 inputs (a, b, & c) can be
 * used in the following operations: 
 * 	a + b = c
 * 	a = b - c
 * 	a * b = c
 */

#include<iostream>


class inputCheck
{
	public:
		inputCheck(int inA = 0, int inB = 0, int inC = 0)
		: a(inA), b(inB), c(inC) {}
		inputCheck(const int& inA, const int& inB, const int& inC)
		: a(inA), b(inB), c(inC) {}

		bool checkIfValid();

	private:
		int a;
		int b; 
		int c;
}

{

bool inputCheck::checkIfValid()
{
	if (a + b == c && 
	    a == b - c &&
	    a * b == c)
	{
		return true;
	} else
		return false;
}
