//****************************************************
//Author:       Collin Quigley
//Date Created: 4/5/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 Production Exam
//Title:        Student Monthly Budget
//Description:  Display the average monthly budget and compare it  
//****************************************************

#include "Budget.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    Budget budget (500, 150, 65, 50, 250, 30, 100, 150, 75, 50);
    Budget expenses; //Default object
    
    //Displaying budget
    budget.displayBudget();    
    
    //Getting and Displaying expenses
    expenses.getExpenses();   
    expenses.displayBudget();
    
    //Comparing budget and expenses
    budget.compareExpenses(expenses);
       
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
