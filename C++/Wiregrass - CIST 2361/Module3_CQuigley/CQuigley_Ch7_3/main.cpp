//****************************************************
//Author:       Collin Quigley
//Date Created: 3/13/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.3
//Title:        Widget Factory
//Description:  Display days it takes to make a certain amount of widgets  
//****************************************************

#include <cstdlib>
#include <iostream>
#include "Widget.h"

using namespace std;


int main(int argc, char *argv[])
{
	
	//declaring
	int widgets, widgetDaily;
	double days;
	int hoursDay = 16, widgetHour = 10;
	
	widgetDaily = hoursDay * widgetHour;
	
	//getting data
    cout << "Please enter the amount of widgets being produced: ";
	cin  >> widgets;
	
	Widget W(widgets, widgetDaily); //creating object with data
	
	days = W.getDays(); //getting days from class
	
	//Displaying
    cout << "It takes " << days << " days to make " << widgets << " widgets.\n\n";	
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
