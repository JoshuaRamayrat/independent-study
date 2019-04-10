/*
R-7.2
	Refer to the tree from Figure 7.3.
		a. What's the root node?
		b. What are the internal nodes?
		c. How many descendents does cs016/ have?
		d. how many ancestors does cs016/ have?
		e. What are the siblings of node homeworks/ ?
		f. Which nodes are in the subtree rooted at node projects/ ?
		g. What is node papers/'s depth ?
		h. What is the tree's height?

Answer:
	a. The root node is /user/rt/courses/
	
	b. /user/rt/courses/
		cs016/
		cs252/
		homeworks/
		programs/
		projects/
		papers/
		demos/
	
	c. 9
	
	d. 1
	
	e. hw1, hw2, hw3
	
	f. papers/, demos/, buylow, sellhigh, market
	
	g. 3
	
		The depth of a node 'p' of tree 'T' is the number of ancestors of 'p' excluding 'p' itself. 

	h. 4
	
		The height of a tree 'T' is the height of T's root.
		If p is external, the height of p is 0.
		The height of p is 1 + maxHeight(p's child)

*/