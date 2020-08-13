//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#include "PatientAccount.h"
#include <iostream>
#include <cstdlib>

using namespace std;

PatientAccount::PatientAccount()
{
  hospitalDays = 0;
  dRate = 200;
  sCost = 0;
  mCost = 0;
  tCost = 0;
}

//Setters              
void PatientAccount::setHospitalDays(int h) { hospitalDays = h; }
void PatientAccount::setDRate(double d) { dRate = d; }
void PatientAccount::setSCost(double s) { sCost = s; }
void PatientAccount::setMCost(double m){ mCost += m; }
void PatientAccount::setTCost(){ tCost = hospitalDays * dRate; }

//Getters
int PatientAccount::getHospitalDays(){ return hospitalDays; }
double PatientAccount::getDRate(){ return dRate; }
double PatientAccount::getSCost(){ return sCost; }
double PatientAccount::getMCost(){ return mCost; }
double PatientAccount::getTCost()
{ 
    setTCost();
    tCost += (sCost + mCost);
    return tCost; 
}
