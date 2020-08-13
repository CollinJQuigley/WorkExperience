//****************************************************
//Author:       Collin Quigley
//Date Created: 1/19/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 2.4
//Title:        Restaurant Bill
//Description:  Create a Restaurant Bill  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    const double MEAL_CHARGE = 44.5, TAX = .0675, TIP = .15;
    double mealTax, mealTip, total;
    
    //Calculating
    mealTax = MEAL_CHARGE * TAX;
    mealTip = (mealTax + MEAL_CHARGE) * TIP;
    total = MEAL_CHARGE + mealTax + mealTip;
    
    //Displaying Results
    cout << setprecision(2) << fixed
         << "===========================" << endl
         << "      Restaurant Bill      " << endl << endl
         << "Meal Cost:          $" << setw(6) << MEAL_CHARGE << endl
         << "Tax:                $" << setw(6) << mealTax << endl
         << "Tip (15%):          $" << setw(6) << mealTip << endl
         << "Total Cost:         $" << setw(6) << total << endl
         << "===========================" << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
