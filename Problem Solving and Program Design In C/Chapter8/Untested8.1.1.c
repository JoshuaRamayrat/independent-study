/*
8.1 Programming Problem 1

Write a program that takes less than 25 characters and prints : "inputWord starts with the letter i"

The program processes until a '9' character is processed.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char firstLetter;
	char inputWord[];
	int numberOfElements = (int)sizeof(InputWord)/sizeof(char);

	while (firstLetter != '9' &&  numberOfElements < 25)
	{
		printf("Enter a word that's less than 25 characters long: ");
		scanf("%c", &inputWord[]);
		firstLetter = inputWord[0];
		
		if (numberOfElements > 25)
		{
			printf("You've entered more than 25 characters. ");
			break;
		} 
	
		printf("%s starts with the letter %c", inputWord, firstLetter);	
	}

	return (0);
}