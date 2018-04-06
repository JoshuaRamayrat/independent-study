/*
 * 3 distinct integers in a stack, S
 * pseudocode for 2/3 prob of picking largest int
 */

int x;
ArrayStack<int> stack1;
ArrayStack<int> stack2;
stack2.push(stack1.top());
stack1.pop();
if (stack1.top()>stack2.top())
	x = stack1.top()
else
	x = stack2.top()


