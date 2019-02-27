#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard() 
{
	
	vector<CreditCard*> wallet(10);

	wallet[0] = new CreditCard("5391 0375 9387 5309", "John Bowman", 2500, "01/21/1990");
	wallet[1] = new CreditCard("1234 5678 9389 1234", "Cathy Stringwoman", 2000, "05/30/1989");

	cout << "The cards are getting charged." << endl;
	for (int j = 1; j <= 16; j++)
	{
		wallet[0] -> chargeIt(double(j));
		wallet[1] -> chargeIt(2 * j);
	}

	cout << "Payments are being made to the cards." << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << *wallet[i];
		while (wallet[i] -> getBalance() > 100.0)
		{
			wallet[i]->makePayment(100.0);
			cout << "The new balance is: " << wallet[i]->getBalance() << endl;
		}
		cout << "\n";
		delete wallet[i];
	}
}

int main()
{
	testCard();
	return 0;
}