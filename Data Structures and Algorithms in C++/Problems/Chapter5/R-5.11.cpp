/*
	R-5.11
	Q:
		Deque D contains : (1, 2, 3, 4, 5, 6, 7, 8)
		Initially empty queue Q.

		No use of variables or objects.
		Give pseudocode description of a function that uses only D and Q
			Results in D: (1, 2, 3, 5, 4, 6, 7, 8)

An STL queue dynamically resizes itself as new elements are added.

principle operations for an STL queue class:
	size();
	empty();
	push(e);
	pop();
	front();
	back();

principle operations for an STL deque class:
	size();
	empty();
	push_front(e)
	push_back(e);
	pop_front();
	pop_back();
	front();
	back();
*/

#include <iostream>
#include <vector>
#include <queue>

std::queue<int> Q;	//initially empty queue
std::deque<int> D;	//initially filled deque

int main()
{
	Q.push(D.front());
	D.pop_front();
	Q.push(D.front());
	D.pop_front();
	Q.push(D.front());
	D.pop_front();

	D.push_back(D.front());
	D.pop_front();

	Q.push(D.front());
	Q.push(D.back());
	D.pop_back();

	Q.push(D.front());
	D.pop_front();
	Q.push(D.front());
	D.pop_front();
	Q.push(D.front());
	D.pop_front();

}
