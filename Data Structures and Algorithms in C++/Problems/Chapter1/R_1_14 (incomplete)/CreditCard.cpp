#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal, const string& dD)
{
	number = no;
	name = nm;
	balance = bal;
	limit = lim;
	dueDate = dD;
}

bool CreditCard::chargeIt(double price) {
	if (price+balance > double(limit))
		return false;
	balance += price;
	return true;
}

void CreditCard::makePayment(double payment) {
	balance -= payment;
}

void CreditCard::chargeLateFee() {
	std::string todaysDate;
	double lateFee = -100;

	cout << "Please enter today's date (DD/MM/YYYY): ";
	cin >> todaysDate;

	int tDay, dDay;
	int tMonth, dMonth;
	int tYear, dYear;

	sscanf(todaysDate, "%d %d %d", &tMonth, &tDay, &tYear);

	sscanf(dueDate, "%d %d %d", &dMonth, &dDay, &dYear);

	if (tYear > dYear || 
		tYear == dYear && tMonth > dMonth ||
		tYear == dYear && tMonth == dMonth && tDay > dDay)
	{
		balance += lateFee;
	} else {
		cout << "The due date is not passed. No late fee is charged. " << endl;
	}

	//for (int i = 0; i < static_cast<int>(todaysDate.size()-1); i++){}
}

ostream& operator<<(ostream& out, const CreditCard& c) {
	out << "Number = " << c.getNumber() << "\n"
		<< "Name = " << c.getName() << "\n"
		<< "Balance = " << c.getBalance() << "\n"
		<< "Limit = " << c.getLimit() << "\n";
		
	return out;
}

