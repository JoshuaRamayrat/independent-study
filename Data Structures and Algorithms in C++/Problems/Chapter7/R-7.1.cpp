/*

R-7.1 

Question:

Describe an algorithm for counting the number of left external nodes of a binary tree using the Binary Tree ADT

The binary tree ADT functions:
	p.left()
	p.right()
	p.parent()
	p.isRoot()
	p.isExternal()
	size()
	empty()
	root()
	positions()

My Answer:
	
	Algorithm binaryPreOrderCount(T,p):
		if p.left() returns true
			return 1;
		else
			return 0;
		if p is an internal node then
			binaryPreorder(T,p.left())		//recursively traverse the left subtree
			binaryPreorder(T,p.right())		//recursively traverse the right subtree
		


*/

#include <iostream>

template<typename E>
class Position<E>
{
public:
	E& operator*();
	Position left() const;
	Position right() const;
	Position parent() const;
	bool isRoot() const;
	bool isExternal() const;
};

template <typename E>
class BinaryTree<E>
{
public:
	class Position;
	class PositionList;
public:
	int size() const;
	bool empty() const;
	Position root() const;
	PositionList positions() constl
};

