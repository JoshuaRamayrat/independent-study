/* Write a C program that scans data to fill
 * the variable competition and displays the 
 * contents of the structure with suitable labels.
 */

#include <stdio.h>

#define STR_LENGTH 20

typedef struct {
	char event[STR_LENGTH],
		entrant[STR_LENGTH],
		country[STR_LENGTH];
	int place;
} olympic_t;

int main(void)
{
	olympic_t competition;

	printf("Enter the event name: ");
	scanf("%s", competition.event);

	printf("Enter the entrant name: ");
	scanf("%s", competition.entrant);

	printf("Enter the country name: ");
	scanf("%d", competition.country);

	printf("\n\n%s \n %s \n %d", competition.event, 
				 competition.entrant,
				 competition.country);

}
