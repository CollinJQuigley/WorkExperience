//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.Soda Machine
//Title:        Soda Machine
//Description:  Create a working soda machine  
//****************************************************

#include "SodaMachine.h"
#include <string>
#include <iostream>

using namespace std;

SodaMachine::SodaMachine() {}

SodaMachine::SodaMachine(string name, double price, int stock)
{
     setName(name);
     setPrice(price);
     setStock(stock);
     SodaMachine cola("Cola", .75, 20);
     SodaMachine rB("Root Beer", .75, 20);
     SodaMachine oS("Orange Soda", .75, 20);
     SodaMachine gS("Grape Soda", .75, 20);
     SodaMachine water("Water", .75, 20);
}

//Setters/Mutators
void SodaMachine::setName(string n) { name = n; }
void SodaMachine::setPrice(double p) { price = p; }
void SodaMachine::setStock(int s) { stock = s; }

//Getters/Accessors
std::string SodaMachine::getName() { return name; }
double SodaMachine::getPrice() { return price; }
int SodaMachine::getStock() { return stock; }

//Other
std::string SodaMachine::displayChoices()
{
     
     std::string choices = "1. Cola          $0.75\n"
                           "2. Root Beer     $0.75\n"
                           "3. Orange Soda   $0.75\n"
                           "4. Grape Soda    $0.75\n"
                           "5. Water         $1.00\n"
                           "6. Quit\n\n";
                           
     return choices;
     
     /**
     cout << "1. Cola          $0.75\n"
          << "2. Root Beer     $0.75\n"
          << "3. Orange Soda   $0.75\n"
          << "4. Grape Soda    $0.75\n"
          << "5. Water         $1.00\n"
          << "6. Quit\n\n";
     **/ 
     
}//End displayChoices()

void SodaMachine::buyDrink(int choice)
{
     
     inputMoney(choice);
     
     
     
}//End buyDrink()

double SodaMachine::inputMoney(int choice)
{
       
       
       
}//End inputMoney()

double SodaMachine:::inputMoney(int choice)
{
       
}//End inputMoney()

void SodaMachine::dailyReport()
{
     
}//End dailyReport()

