//****************************************************
//Author:       Collin Quigley
//Date Created: 4/5/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 Production Exam
//Title:        Student Monthly Budget
//Description:  Display the average monthly budget and compare it  
//****************************************************

#ifndef BUDGET_H
#define BUDGET_H
#include <iostream>

using namespace std;

class Budget
{

     private:        
        double housing, util, houseExpens, transport, food, med, insurance,
               entertainment, clothing, misc;
        
     public: 
            Budget();
            Budget(double, double, double, double, double, double, double, 
                   double, double, double);
            
            //Setters
            void setHousing(double);
            void setUtil(double);
            void setHouseExpens(double);
            void setTransport(double);
            void setFood(double);
            void setMed(double);
            void setInsurance(double);
            void setEntertainment(double);
            void setClothing(double);
            void setMisc(double);           
            
            //Getters
            double getHousing();
            double getUtil();
            double getHouseExpens();
            double getTransport();
            double getFood();
            double getMed();
            double getInsurance();
            double getEntertainment();
            double getClothing();
            double getMisc();
            
            void displayBudget();
            void getExpenses();
            void compareExpenses(Budget);
            
};
#endif
