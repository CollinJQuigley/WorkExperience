//****************************************************
//Author:       Collin Quigley
//Date Created: 2/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 4.7
//Title:        Time Calculator
//Description:  Create a calculator for time  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    int seconds;
    double calcTime;
    
    //Getting info
    cout << "Please enter the amount of seconds you want to calculate. ";
    cin  >> seconds;
    
    //Calculating info
    if (seconds >= 86400)
    {
       calcTime = (seconds / 86400);
       cout << setprecision(1) << fixed
            << "There are " << calcTime << " day(s) in " << seconds 
            << " seconds.\n\n";
    }
    else if (seconds >= 3600)
    {
        calcTime = (seconds / 3600);
        cout << setprecision(1) << fixed
             << "There are " << calcTime << " hour(s) in " << seconds 
             << " seconds.\n\n";
    }
    else if (seconds >= 60)
    {
        calcTime = (seconds / 60);
        cout << setprecision(1) << fixed
            << "There are " << calcTime << " minute(s) in " << seconds 
            << " seconds.\n\n"; 
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
