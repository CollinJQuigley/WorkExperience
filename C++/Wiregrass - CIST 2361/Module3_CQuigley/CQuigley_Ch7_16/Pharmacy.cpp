//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#include "Pharmacy.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Pharmacy::Pharmacy()
{
    med1 = 100;
    med2 = 110;
    med3 = 120;
    med4 = 130;
    med5 = 140;
}

//Setters
double Pharmacy::setMed1(double m1) { med1 = m1; }
double Pharmacy::setMed2(double m2) { med2 = m2; }
double Pharmacy::setMed3(double m3) { med3 = m3; }
double Pharmacy::setMed4(double m4) { med4 = m4; }
double Pharmacy::setMed5(double m5) { med5 = m5; }

//Getters
double Pharmacy::getMed1() { return med1; }
double Pharmacy::getMed2() { return med2; }
double Pharmacy::getMed3() { return med3; }
double Pharmacy::getMed4() { return med4; }
double Pharmacy::getMed5() { return med5; }

