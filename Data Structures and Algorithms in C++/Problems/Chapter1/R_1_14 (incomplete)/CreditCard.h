//Modify the CreditCard class to charge a late fee for payments past the due date.

#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>
#include <cstdio>

class CreditCard{
	public:
		CreditCard(const std::string& no, 
			const std::string& nm, 
			int lim, 
			double bal = 0, 
			const std::string& dD);

		std::string getNumber() const {return number;}
		std::string getName() const { return name; }
		double getBalance()const { return balance; } 
		int getLimit() const { return limit; }

		bool chargeIt(double price);
		void makePayment(double payment);
		void chargeLateFee();

	private:
		std::string number;
		std::string name;
		int limit;
		double balance;

		std::string dueDate;
};

std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif