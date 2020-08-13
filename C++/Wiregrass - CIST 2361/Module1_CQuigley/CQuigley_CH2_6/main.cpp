//****************************************************
//Author:       Collin Quigley
//Date Created: 1/19/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 2.6
//Title:        Miles Per Gallon
//Description:  Create a program that finds the MGP of a car  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    const int GALLONS = 16, MILES = 350;
    double mpg;
    
    //Calculating
    mpg = MILES / GALLONS;
    
    //Displaying Results
    cout << setprecision(2) << fixed
         << "The car holds " << GALLONS << " and can travel a distance of "
         << MILES << "." << endl << "The Miles Per Gallon for the car is: " 
         << mpg << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
