//****************************************************
//Author:       Collin Quigley
//Date Created: 4/5/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 Production Exam
//Title:        Student Monthly Budget
//Description:  Display the average monthly budget and compare it  
//****************************************************

#include "Budget.h"
#include <iostream>

using namespace std;

Budget::Budget(){}

Budget::Budget(double h, double u, double hE, double t, double f, double m, 
               double i, double e, double c, double mi)
{
   setHousing(h);
   setUtil(u);
   setHouseExpens(hE);
   setTransport(t);
   setFood(f);
   setMed(m);
   setInsurance(i);
   setEntertainment(e);
   setClothing(c);
   setMisc(mi);
}

//Setters
void Budget::setHousing(double h) { housing = h; }
void Budget::setUtil(double u) { util = u; } 
void Budget::setHouseExpens(double hE) { houseExpens = hE; }
void Budget::setTransport(double t) { transport = t; }
void Budget::setFood(double f) { food = f; }
void Budget::setMed(double m) { med = m; }
void Budget::setInsurance(double i) { insurance = i; }
void Budget::setEntertainment(double e) { entertainment = e; }
void Budget::setClothing(double c) { clothing = c; }
void Budget::setMisc(double mi) { misc = mi; }
            
//Getters
double Budget::getHousing() { return housing; }
double Budget::getUtil() { return util; }
double Budget::getHouseExpens() { return houseExpens; }
double Budget::getTransport() { return transport; }
double Budget::getFood() {return food; }
double Budget::getMed() { return med; }
double Budget::getInsurance() { return insurance; }
double Budget::getEntertainment() {return entertainment; }
double Budget::getClothing() { return clothing; }
double Budget::getMisc() { return misc; }

void Budget::displayBudget()
{
     cout << "Housing:              $" << getHousing() << endl
          << "Utilities:            $" << getUtil() << endl
          << "Household Expenses:   $" << getHouseExpens() << endl
          << "Transportation:       $" << getTransport() << endl
          << "Food:                 $" << getFood() << endl
          << "Medical:              $" << getMed() << endl
          << "Insurance:            $" << getInsurance() << endl
          << "Entertainment:        $" << getEntertainment() << endl
          << "Clothing:             $" << getClothing() << endl
          << "Miscellaneous:        $" << getMisc() << endl << endl;
}// End displayBudget()

void Budget::getExpenses()
{
     double var;
     cout << "Enter cost of Housing:              ";
     cin  >> var;
     setHousing(var);
     
     cout << "Enter cost of Utilities:            ";
     cin  >> var;
     setUtil(var);
     
     cout << "Enter cost of Household Expenses:   ";
     cin  >> var;
     setHouseExpens(var);
     
     cout << "Enter cost of Transportation:       ";
     cin  >> var;
     setTransport(var);
     
     cout << "Enter cost of Food:                 ";
     cin  >> var;
     setFood(var);
     
     cout << "Enter cost of Medical:              ";
     cin  >> var;
     setMed(var);
     
     cout << "Enter cost of Insurance:            ";
     cin  >> var;
     setInsurance(var);
     
     cout << "Enter cost of Entertainment:        ";
     cin  >> var;
     setEntertainment(var);
     
     cout << "Enter cost of Clothing:             ";
     cin  >> var;
     setClothing(var);
     
     cout << "Enter cost of Miscellaneous:        ";
     cin  >> var;
     setMisc(var);
     
     cout << endl;
     
}// End getExpenses()

void Budget::compareExpenses(Budget b)
{
  if (getHousing() < b.getHousing())
  {
      cout << "Your Housing Budget is over by " 
           << (b.getHousing() - getHousing()) << ".";
  }
  else if (getHousing() > b.getHousing())
  {
       cout << "Your Housing Budget is under by " 
            << (getHousing() - b.getHousing()) << ".";
  }
  else
       cout << "Your Housing Budget is on par.";
       
  cout << endl << endl; //End Housing compare
  
  if (getUtil() < b.getUtil())
  {
      cout << "Your Utilities Budget is over by " 
           << (b.getUtil() - getUtil()) << ".";
  }
  else if (getUtil() > b.getUtil())
  {
       cout << "Your Utilities Budget is under by " 
            << (getUtil() - b.getUtil()) << ".";
  }
  else
       cout << "Your Utilities Budget is on par.";
       
  cout << endl << endl; //End Utilites compare
  
  if (getHouseExpens() < b.getHouseExpens())
  {
      cout << "Your Household Expenses Budget is over by " 
           << (b.getHouseExpens() - getHouseExpens()) << ".";
  }
  else if (getHouseExpens() > b.getHouseExpens())
  {
       cout << "Your Household Expenses Budget is under by " 
            << (getHouseExpens() - b.getHouseExpens()) << ".";
  }
  else
       cout << "Your Household Expenses Budget is on par.";
       
  cout << endl << endl; //End Household Expenses compare
  
  if (getTransport() < b.getTransport())
  {
      cout << "Your Transportation Budget is over by " 
           << (b.getTransport() - getTransport()) << ".";
  }
  else if (getTransport() > b.getTransport())
  {
       cout << "Your Transportation Budget is under by " 
            << (getTransport() - b.getTransport()) << ".";
  }
  else
       cout << "Your Transportation Budget is on par.";
       
  cout << endl << endl; //End Transportation compare
  
  if (getFood() < b.getFood())
  {
      cout << "Your Food Budget is over by " 
           << (b.getFood() - getFood()) << ".";
  }
  else if (getFood() > b.getFood())
  {
       cout << "Your Food Budget is under by " 
            << (getFood() - b.getFood()) << ".";
  }
  else
       cout << "Your Food Budget is on par.";
       
  cout << endl << endl; //End Food compare
  
  if (getMed() < b.getMed())
  {
      cout << "Your Medical Budget is over by " 
           << (b.getMed() - getMed()) << ".";
  }
  else if (getMed() > b.getMed())
  {
       cout << "Your Medical Budget is under by " 
            << (getMed() - b.getMed()) << ".";
  }
  else
       cout << "Your Medical Budget is on par.";
       
  cout << endl << endl; //End Medical compare
  
  if (getInsurance() < b.getInsurance())
  {
      cout << "Your Insurance Budget is over by " 
           << (b.getInsurance() - getInsurance()) << ".";
  }
  else if (getInsurance() > b.getInsurance())
  {
       cout << "Your Insurance Budget is under by " 
            << (getInsurance() - b.getInsurance()) << ".";
  }
  else
       cout << "Your Insurance Budget is on par.";
       
  cout << endl << endl; //End Insurance compare
  
  if (getEntertainment() < b.getEntertainment())
  {
      cout << "Your Entertainment Budget is over by " 
           << (b.getEntertainment() - getEntertainment()) << ".";
  }
  else if (getEntertainment() > b.getEntertainment())
  {
       cout << "Your Entertainment Budget is under by " 
            << (getEntertainment() - b.getEntertainment()) << ".";
  }
  else
       cout << "Your Entertainment Budget is on par.";
       
  cout << endl << endl; //End Entertainment compare
  
  if (getClothing() < b.getClothing())
  {
      cout << "Your Clothing Budget is over by " 
           << (b.getClothing() - getClothing()) << ".";
  }
  else if (getClothing() > b.getClothing())
  {
       cout << "Your Clothing Budget is under by " 
            << (getClothing() - b.getClothing()) << ".";
  }
  else
       cout << "Your Clothing Budget is on par.";
       
  cout << endl << endl; //End Clothing compare
  
  if (getMisc() < b.getMisc())
  {
      cout << "Your Miscellaneous Budget is over by " 
           << (b.getMisc() - getMisc()) << ".";
  }
  else if (getMisc() > b.getMisc())
  {
       cout << "Your Miscellaneous Budget is under by " 
            << (getMisc() - b.getMisc()) << ".";
  }
  else
       cout << "Your Miscellaneous Budget is on par.";
       
  cout << endl << endl; //End Miscellaneous compare
  
  double total, totalTwo;
  
  total = (getHousing() + getUtil() + getHouseExpens() + getTransport()
          + getFood() + getMed() + getInsurance() + getEntertainment()
          + getClothing() + getMisc());
  
  totalTwo = (b.getHousing() + b.getUtil() + b.getHouseExpens() + b.getTransport()
          + b.getFood() + b.getMed() + b.getInsurance() + b.getEntertainment()
          + b.getClothing() + b.getMisc());
          
  if (total < totalTwo)
  {
      cout << "Your Total Budget is over by " 
           << (totalTwo - total) << ".";
  }
  else if (total > totalTwo)
  {
       cout << "Your Total Budget is under by " 
            << (total - totalTwo) << ".";
  }
  else
       cout << "Your Total Budget is on par.";
       
  cout << endl << endl; //End Miscellaneous compare
          
  
}// End compareExpenses()
