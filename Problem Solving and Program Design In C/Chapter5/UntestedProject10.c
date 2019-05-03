/*

Van der Waals equation:
	P + [(a*n^2)/(V^2)]*[V - b*n] = n*R*T

Carbon dioxide quantity (moles)
Temperature (Kelvin)
initial volume (mL)
final volume (mL)
volume increment (mL)

a = 3.592
b = 0.0427
R = 0.08206

*/

#include <stdio.h>
#include <math.h>

void vanderWaals()
{
	
	double CO2;
	double temp;
	double initV, finalV, increment;

	printf("Please enter a value when prompted. \n");
	
	printf("Moles of Carbon Dioxide: ");
	scanf("%d", &CO2);
	
	printf("Temperature in Kelvins: ");
	scanf("%d", &temp);
	
	printf("Initial volume: ");
	scanf("%d", &initV);
	
	printf("Final volume: ");
	scanf("%d", &finalV);
	
	printf("Volume increment: ");
	scanf("%d", &increment);
	
	printf("%d moles of Carbon Dioxide at a temperature of %d", &CO2, &temp);
		
	//P + [(a*n^2)/(V^2)]*[V - b*n] = n*R*T
	//a = 3.592
	//b = 0.0427
	//R = 0.08206
	
	// Find a way to create an output file so that it has the contents below.
	
	printf("Volume(mL)     Pressure (atm)");
	for (int currVol = initV; currVol <= finalV; currVol += increment)
	{
		int currPressure = (CO2*0.08206*temp) - ( (3.592*pow(CO2,2))/(pow(currVol,2)) ) * (currVol - 0.0427*CO2);
		printf("%d    %d", &currVol, &currPressure);
	}
}



