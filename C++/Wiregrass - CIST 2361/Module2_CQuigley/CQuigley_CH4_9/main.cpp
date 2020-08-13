//****************************************************
//Author:       Collin Quigley
//Date Created: 2/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 4.9
//Title:        Software Sales
//Description:  Compile cost for sales  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    const int PRICE_PACKAGE = 99;
    int unitsSold;
    double totalCost, discount, saved;
    
    //Getting Info
    cout << "Please enter the amount of packages sold: ";
    cin  >> unitsSold;
    
    //Calculating and Displaying
    if (unitsSold >= 100)
       discount = 0.5;
    else if (unitsSold >= 50)
       discount = 0.4;
    else if (unitsSold >= 20)
        discount = 0.3;
    else if (unitsSold >= 10)
        discount = 0.2;
    else
        discount = 0;
        
    if (discount != 0)
    {
       saved = (unitsSold * PRICE_PACKAGE) * discount;
       totalCost = (unitsSold * PRICE_PACKAGE) - saved;
       cout << setprecision(2) << fixed
            << "The total cost of your purchase is $" <<  totalCost 
            << " and you saved $" << saved << "!\n\n";
    }
    else
    {
        totalCost = unitsSold * PRICE_PACKAGE;
        cout << setprecision(2) << fixed
             << "The total cost of your purchase is $" << totalCost
             << " and you were not eligible for a discount.\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
