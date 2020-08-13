//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#include "Surgery.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Surgery::Surgery()
{
    sBrain = 1400;
    sHeart = 1300;
    sLeg = 1200;
    sArm = 1100;
    sChest = 1000;
}

//Setters
void Surgery::setSBrain(double b) { sBrain = b; }
void Surgery::setSHeart(double h) { sHeart = h; }
void Surgery::setSLeg(double l) { sLeg = l; }
void Surgery::setSArm(double a) { sArm = a; }
void Surgery::setSChest(double c) { sChest = c; }
          
//Getters
double Surgery::getSBrain() { return sBrain; }
double Surgery::getSHeart() { return sHeart; }
double Surgery::getSLeg() { return sLeg; }
double Surgery::getSArm() { return sArm; }
double Surgery::getSChest() { return sChest; }
