// Class Flower with 3 member variables of the flower's name, its number of pedals,
// and price. (String, int, & float).
// Include a constructor method for initialization, functions for value-setting
// and value-getting.

#include <iostream>

class Flower
{
	public:
		//default constructor
		Flower();
		//input constructor
		Flower(const string& name,
				int num,
				float price);
		//copy constructor
		Flower(const Flower& flow);


		std::string 	getName(){ return flowerName; }
		int 		getNumberOfPedals(){ return numPedal; }
		float 		getPrice(){ return flowerPrice; }

		void setName(string& inputName) { flowerName = inputName; }
		void setNumPedal(int inputNum) { numPedal = inputNum; }
		void setPrice(float inputPrice) { flowerPrice = inputPrice; }


	private:
		std::string flowerName;
		int numPedal;
		float flowerPrice;
}


Flower::Flower()
{
	name = "N/A";
	num = 0;
	price = 100.0;
}

Flower::Flower(const string& name, int num, float price)
{
	flowerName = name;
	numPedal = num;
	price = flowerPrice;
}

Flower::Flower(const Flower& flow)
{
	flowerName = flow.flowerName;
	numPedal = flow.numPedal;
	flowerPrice = flow.flowerPrice;
}

int main()
{
	cout << "Creating a flower object: " << endl;
	Flower test1;

	cout << test1.getName() << endl;

	return 0;

	
}

