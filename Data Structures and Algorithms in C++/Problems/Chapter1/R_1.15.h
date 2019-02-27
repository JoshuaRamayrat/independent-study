#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>

class CreditCard{
	public:
		CreditCard(const std::string& no, const std::string& nm, int lim, double bal = 0);
		
		std::string getNumber() const { return number; }
		std::string getName() const { return name; }
		double getBalance() const { return balance; }
		int getLimit() const { return limit; }
		
		void setNumber(string inputNum) { number = inputNum;}
		void setName(string inputName) { name = inputName;}
		void setBalance(double inputBal) { balance = inputBal;}
		void setLimit(int inputLim) { limit = inputLim;}

		bool chargeIt(double price);
		void makePayment(double payment);



	private:
		std::string number;
		std::string name;
		int limit; 
		double balance;
};

std::ostream& operator<<(Std::ostream& out, const CreditCard& c);

#endif