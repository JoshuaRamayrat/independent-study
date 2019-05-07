/*

Section 8.2 Programming Problem 2

function trim_blanks - trims leading and trailing blanks of an input string.

use strncpy:

	char *strncpy(char *dest, const char *source, size_t n)
		char *dest
		const char *source
		size_t n

*/

#include <stdio.h>
#include <string.h>

char * trim_blanks(char *trimmed, const char *to_trim);

int main(void)
{

}

char * trim_blanks(char *trimmed, const char *to_trim)
{
	int firstNonBlank;
	int lastNonBlank;
	
	int inputLength = (int)sizeof(to_trim)/sizeof(char);

	strcpy(trimCopy, to_trim);

	//Find subscript of first nonblank. 
	for (int i = 0; i <= inputLength-1; i++)
	{
		if (isalpha(to_trim[i]))
		{
			firstNonBlank = i;
			break;
		}
	}
	
	//Find subscript of last nonblank.
	for (int i = inputLength-1; i >= 0; i--)
	{
		if (isalpha(to_trim[i]))
		{
			lastNonBlank = i;
		}
	}

	// use strncpy to store trimmed string in trimmed.
	strncpy(trimmed, to_trim[firstNonBlank], lastNonBlank-firstNonBlank);

	return trimmed;

}
