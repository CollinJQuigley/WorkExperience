//****************************************************
//Author:       Collin Quigley
//Date Created: 1/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 2.16
//Title:        Energy Drink
//Description:  Display Energy Drink sales precentages  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	double totalCustomers = 12467;
	double percentWeekly = 0.14;
	double percentCitrus = 0.64;
	int weeklyCustomers = 0;
	int citrusCustomers = 0;
	
	//Calculating
	weeklyCustomers = totalCustomers * percentWeekly;
	citrusCustomers = weeklyCustomers * percentCitrus;
	
	//Displaying
	cout << "The approximate number of customers in the survey who purchase one or more energy drinks weekly are " << weeklyCustomers << "." << endl;
	cout << "The approximate number of the energy drink customers who prefer citrus flavor are " << citrusCustomers << "." << endl << endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}
