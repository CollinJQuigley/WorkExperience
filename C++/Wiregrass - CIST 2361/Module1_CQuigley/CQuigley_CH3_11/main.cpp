//****************************************************
//Author:       Collin Quigley
//Date Created: 1/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 3.11
//Title:        Celsius to Fahreneit
//Description:  Change Celsius degree to Fahreneit degree  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	double celsius = 0;
	double fahreneit = 0;
	
	
	//Retrieving	
	cout << "Please enter the Celsius degree: ";
	cin  >> celsius;
	
	//Calculating	
	fahreneit = celsius * 9/5 + 32;
	
	//Displaying
	cout << setprecision(2) << fixed
		 << celsius << " Celsius equals " << fahreneit << " Fehreneit." << endl << endl;	
	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}
