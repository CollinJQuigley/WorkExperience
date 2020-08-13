//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#ifndef PHARMACY_H
#define PHARMACY_H

using namespace std;

class Pharmacy
{
      private:
               double med1, med2, med3, med4, med5;
              
      public:
             Pharmacy();
             
             //Setters
             double setMed1(double);
             double setMed2(double);
             double setMed3(double);
             double setMed4(double);
             double setMed5(double);
             
             //Getters
             double getMed1();
             double getMed2();
             double getMed3();
             double getMed4();
             double getMed5();
             
             
};
#endif
