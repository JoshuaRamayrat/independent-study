/* Write a java program to detect if 2 strings
 * are circular shifts of one another
 *
 * Hint: The solution is a 1-liner with indexOf, length(), 
 * 	 & string concatenation.
 */

import java.util.Scanner;
import java.util.Arrays;

public class problemTwoSix
{
	public static int TwoStringTest(String a, String b)
	{
		if (a == b.substring(b.indexOf(a.charAt(0)), b.length()-1)
				   + b.substring(0, b.indexOf(a.charAt(0))))
		{
			return 1;
		} else
		{
			return 0;
		}
	}

	public static void main(String[] args)
	{
		Scanner reader1 = new Scanner(System.in);
		System.out.println("Enter string 1: ");
		String input1 = reader1.next();
		System.out.println("Enter string 2: ");
		String input2 = reader1.next();

		int printVal = TwoStringTest(input1, input2);

		System.out.print(printVal);		
	}

}
