/*
 * Keith's Sheet Music needs a program to implement
 * its music teachers discount policy. 
 *
 * 	prompt the user to:
 * 		enter purchase total
 * 		ask if purchaser is a teacher
 *
 * 	print a 'receipt' or create formatted file called receipt.txt
 *
 * 	Music teachers 10% discount if purchase < $100.
 * 	12% discount if > $100.
 *
 * 		discount occurs before the 5% sales tax.
 *
 * 	example output:
 * 		Total Purchases		122.00
 * 		Teacher's discount	14.64
 * 		Discounted total	107.36
 * 		Sales tax		5.37
 * 		Total			112.73
 *
 * 		Total purchases		24.90
 * 		Sales tax		1.25
 * 		Total			26.15
 *
 * 	"printf("%d%%", SALES_TAX);"
 * 		to display a % sign.
 *
 */ 

#include <stdio.h>

#define teacher_discount1 0.1
#define teacher_discount2 0.12

#define sales_tax 0.05

int main(void)
{
	int purchase_total;
	printf("Enter the total of the purchase: ");
	scanf("%lf", &purchase_total);

	char teacher;
	printf("Is the buyer a teacher? (Y or N) ");
	scanf("%c", &teacher);

	if (teacher == 'N')
	{
		purchase_total += (sales_tax*purchase_total)
	} else 
	{
		if (purchase_total >= 100)
		{
			purchase_total = purchase_total -
					 (purchase_total*teacher_discount2) +
					 (purchase_total*sales_tax);
		} else if (purchase_total < 100)
		{
			purchase_total = purchase_total - 
					 (purchase_total*teacher_discount1) +
					 (purchase_total*sales_tax);
		}
	}

}
