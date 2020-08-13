//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include <iostream>

using namespace std;

class PatientAccount
{

     private:

        double dRate, tCost, sCost, mCost;
        int hospitalDays;
        
     public: 
            PatientAccount();
            
            //Setters
            void setHospitalDays(int);
            void setDRate(double);
            void setSCost(double);
            void setMCost(double);
            void setTCost(double);            
            
            //Getters
            int getHospitalDays();
            double getDRate();
            double getSCost();
            double getMCost();
            double getTCost();          
            
};
#endif
