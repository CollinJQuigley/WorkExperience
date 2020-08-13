//****************************************************
//Author:       Collin Quigley
//Date Created: 2/9/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 5.4
//Title:        Celsius to Fahreneit Table
//Description:  Display table of Cel to Fah 0 to 20  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	const int MAX = 20;
	double fahreneit = 0;
	
	//Displaying Intro
	cout << "=====================================\n"
	     << "        Celsius to Fahreneit\n"
	     << "              0 - 20\n";
	
	//Calculating and Displaying
	for (int i = 0; i <= MAX; i++)
	{
        fahreneit = i * 9/5 + 32;
        cout << setprecision(2) << fixed
		 << i << " Celsius equals " << fahreneit << " Fahreneit." << endl;
    }	
    
    cout << "=====================================\n\n";	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}

