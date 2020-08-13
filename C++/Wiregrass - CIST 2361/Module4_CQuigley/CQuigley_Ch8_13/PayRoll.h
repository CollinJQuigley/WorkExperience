//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2106
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.13
//Title:        PayRoll
//Description:  An array of payroll objects   
//****************************************************

#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>

class PayRoll
{

    private:
            double hoursWorked, hoursPay;
             
            
    public:
            PayRoll();
            PayRoll(double, double);
            
            //Setters/Mutators
            void setHoursWorked(double);
            void setHoursPay(double);
            
            //Getters/Accessors
            double getHoursWorked();
            double getHoursPay();
            
            //Destructor
            ~MovieData();
            
            //Other
            double getGrossPay();
            
};
#endif
