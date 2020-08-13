//****************************************************
//Author:       Collin Quigley
//Date Created: 3/7/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 6.2
//Title:        Celsius Temperture Table
//Description:  Convert 0-20 Fahrenheit to Celsius  
//****************************************************

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Prototypes
double celsius(int c);

int main(int argc, char** argv) {
	
	//Declaring
	double celsiusDeg;
	
	for (int i = 0; i <= 20; i++)
	{
		celsiusDeg = celsius(i);
		cout << setprecision(2) << fixed
			 << i << " Fahrenheit is equal to " << celsiusDeg << " Celsius." << endl;
	}
	
	return 0;
}

double celsius(int f)
{
	double c;
	
	c = 0.55556 * (f - 32);
	
	return c;
}
