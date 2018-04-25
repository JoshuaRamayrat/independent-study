// Write a program that takes from standard input an expression
// without left parentheses and prints the equivalent infix
// expression with the parentheses inserted.
// 
// For example, given the input:
//
// 	1 + 2 ) * 3 - 4 ) * 5 - 6 ) ) )
//
// your program should print:
//
// 	( ( 1 + 2 ) * ( ( 3 - 4 ) * ( 5 - 6 ) ) )
//
//
// my approach:
//	
//	checking in reverse order
//
//	1 spot is a set of 2 nums doing an operation
//
//	if you encounter a right paren on its own
//	go back one spot & add "( "
//
// 	if you encounter a right paren after a right paren
// 	then go back 2 spots & add "( "


public class threeNine
{
	public static void main(String[] args)
	{
		Stack<String> LeftParenStack;
		String inputStr = StdIn.readString();
		
		j = 0;
		k = 0;
		
		for(int i = inputStr.length(); i > 0; i--)
		{
			if (inputStr(i) == ")"
			    && inputStr(i - 4) != "*")
			{
				
			}

		}
	}

}

