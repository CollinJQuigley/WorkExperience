//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2106
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.13
//Title:        PayRoll
//Description:  An array of payroll objects   
//****************************************************

#include "PayRoll.h"
#include <iostream>
#include <cstdlib>

PayRoll::PayRoll() {}

PayRoll::PayRoll(double hoursWorked, double hoursPay)
{
     setHoursWorked(hoursWorked);
     setHoursPay(hoursPay);                  
}

void PayRoll::setHoursWorked(double w) { hoursWorked = w; }
void PayRoll::setHoursPay(double p) { hoursPay = p; }

double PayRoll::getHoursWorked() { return hoursWorked; }
double PayRoll::getHoursPay() { return hoursPay; }

double PayRoll::getGrossPay()
{
     double grossPay = (hoursWorked * hoursPay)
     return grossPay;       
}//End getGrossPay()
