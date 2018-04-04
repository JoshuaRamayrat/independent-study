/* How would you call a function 'scan_olympic'
 * passing 'competition' as an output argument?
 */

#include <stdio.h>
#define STR_LENGTH 20

typedef struct {
	char event[STR_LENGTH],
	     entrant[STR_LENGTH],
	     country[STR_LENGTH];
	int place;
} olympic_t;

olympic_t scan_olympic(olympic_t *competitionArg)
{
	scanf("%s %s %d", competitionArg->event,
			  competitionArg->entrant,
			  competitionArg->country);
	return competitionArg;
}

int main(void)
{
	olympic_t competition;

	scan_olympic(&competition);

	return (0);
}
