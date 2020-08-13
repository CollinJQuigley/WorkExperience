//****************************************************
//Author:       Collin Quigley
//Date Created: 3/7/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 6.1
//Title:        Markup
//Description:  Markup the wholesale price to the retailer price  
//****************************************************

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Prototypes
double calculateRetail(double wholeSale, double markupPer);

int main(int argc, char** argv) {
	
	//Declaring
	double wholeSale, markupPer, retail;
	
	//Getting info
	cout << "Please enter the item's wholesale cost: ";
	cin  >> wholeSale;
	
	cout << "Please enter the item's markup percentage: ";
	cin  >> markupPer;
	
	//Sending data
	retail = calculateRetail(wholeSale, markupPer);
	
	//Displaying
	cout << setprecision(2) << fixed 
		 << "The item's retail price is: $" << retail << "\n\n";
	
	return 0;
}

double calculateRetail(double wS, double mP) //wS = wholeSale and mP = markupPer
{
	double r;
	
	r = ((mP / 100) * wS) + wS;
	
	return r;
}
