//****************************************************
//Author:       Collin Quigley
//Date Created: 2/18/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 5.22
//Title:        Sales Bar Chart
//Description:  A chart to show the sales in $100s  
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    double storeSaleOne = 0, storeSaleTwo = 0, storeSaleThree = 0;    
    
    //Getting Info  (Also, this would be so much quicker to write with a for loop and an array.)
    cout <<"Please round up each sale to the nearest $100.\n\n";
    
	cout << "Enter today's sales for store 1: ";
    cin  >> storeSaleOne;
    cout << endl;
    
    cout << "Enter today's sales for store 2: ";
    cin  >> storeSaleTwo;
    cout << endl;
    
    cout << "Enter today's sales for store 3: ";
    cin  >> storeSaleThree;
    cout << endl;
    
    //Calculating and Displaying		
	cout << "    DAILY SALES\n";
	cout << "  (each * = $100)\n";
	cout << "Store 1: ";
	do
	{
		cout << "*";
		storeSaleOne -= 100;				
	}while (storeSaleOne >= 100);
	cout << endl;
	
	cout << "Store 2: ";
	do
	{
		cout << "*";
		storeSaleTwo -= 100;				
	}while (storeSaleTwo >= 100);
	cout << endl;
	
	cout << "Store 3: ";
	do
	{
		cout << "*";
		storeSaleThree -= 100;				
	}while (storeSaleThree >= 100);
	cout << endl;	

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
