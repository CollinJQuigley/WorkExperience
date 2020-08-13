//****************************************************
//Author:       Collin Quigley
//Date Created: 1/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 3.2
//Title:        Stadium Seating
//Description:  Display sales of all the class seats  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	int seatsA, seatsB,	seatsC = 0;
	int priceA = 15;
	int priceB = 12;
	int priceC = 9;
	double totalSales = 0;
	
	//Retrieving
	cout << "How mant Class A seats were bought: ";
	cin  >> seatsA;
	
	cout << "How many Class B seats were bought: ";
	cin  >> seatsB;
	
	cout << "How many Class C seats were bought: ";
	cin  >> seatsC;
	
	//Calculating
	totalSales = (seatsA * priceA) + (seatsB * priceB) + (seatsC * priceC);
	
	//Displaying
	cout << setprecision(2) << fixed
		 << "The total sales for all tickets including Class A, B, and C is $" << totalSales << "." << endl << endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}
