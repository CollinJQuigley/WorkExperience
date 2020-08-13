//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2106
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.13
//Title:        PayRoll
//Description:  An array of payroll objects   
//****************************************************

#include <cstdlib>
#include <iostream>
#include "PayRoll.h" //Having problem with connecting class

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    int const SIZE = 7;
    PayRoll employees[SIZE];
    ifstream inputFile;
	inputFile.open("payroll.dat");
	
	for (int i = 0; i < SIZE; i++)
	{
        inputFile >> employees[i].getHoursWorked();
        inputFile >> employees[i].getHoursPay();     
    }//End for
    
    for (int i = 0; i < SIZE; i++)
        cout << "The Gross Pay for employee "
             << i+1 << " is " << employees[i].getGrossPay()
             << ".\n\n";	
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
