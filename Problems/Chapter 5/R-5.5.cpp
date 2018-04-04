/*
	R-5.5
	
	Describe the output of the following series of stack operations:

	push(5)
	push(3)
	pop()
	push(2)
	push(8)
	pop()
	pop()
	push(9)
	push(1)
	pop()
	push(7)
	push(6)
	pop()
	pop()
	push(4)
	pop()
	pop()
*/


#include <stack>
#include <iostream>
#include <vector>

int main()
{
	stack <int> S;

	S.push(5); 		//S = [5]
	S.push(3);		//S = [5, 3]
	S.pop();		//S = [5]
	S.push(2);
	S.push(8);
	S.pop();
	S.push(9);
	S.push(1);
	S.pop();
	S.push(7);
	S.push(6);
	S.pop();
	S.pop();
	S.push(4);
	S.pop();
	S.pop();		//S = [5, 2];
}