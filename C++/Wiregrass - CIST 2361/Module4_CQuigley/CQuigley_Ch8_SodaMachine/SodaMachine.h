//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.Soda Machine
//Title:        Soda Machine
//Description:  Create a working soda machine  
//****************************************************

#ifndef SODAMACHINE_H
#define SODAMACHINE_H
#include <string>
#include <iostream>

using std::string;

class SodaMachine
{

    private:
             //Declaring
             std::string name;
             double price;
             int stock;
             
             //Other
             double inputMoney(int);
             void dailyReport();
            
    public:
             SodaMachine();
             SodaMachine(string, double, int);
            
             //Setters/Mutators
             void setName(string);
             void setPrice(double);
             void setStock(int);
            
             //Getters/Accessors
             std::string getName();
             double getPrice();
             int getStock();
            
            
             //Destructor
             ~SodaMachine();
            
             //Other
             std::string displayChoices();
             void buyDrink(int);
            
};
#endif
