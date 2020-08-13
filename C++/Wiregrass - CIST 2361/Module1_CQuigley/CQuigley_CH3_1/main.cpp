//****************************************************
//Author:       Collin Quigley
//Date Created: 1/19/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 3.1
//Title:        Miles Per Gallon
//Description:  Create a program that uses imput to find the MGP  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	double gallons = 0;
	double miles = 0;
	double mpg = 0;
	
	//Retrieving
	cout << "Please enter the total amount of gallons of gas your car can hold: ";
	cin  >> gallons;
	
	cout << "Please enter the total miles your car can travel with a full tank: ";
	cin  >> miles;
	
	//Calculating
	mpg = miles / gallons;
	
	//Displaying
	cout << setprecision(2) << fixed
		 <<"Your car's MPG is " << mpg << "." << endl << endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}
