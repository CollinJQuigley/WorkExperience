//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#ifndef SURGERY_H
#define SURGERY_H
#include <iostream>

using namespace std;

class Surgery
{

    private:
            double sBrain, sHeart, sLeg, sArm, sChest; // s = surgery
            
    public:
           Surgery();
           
           //Setters
           void setSBrain(double);
           void setSHeart(double);
           void setSLeg(double);
           void setSArm(double);
           void setSChest(double);
           
		   //Getters
           double getSBrain();
           double getSHeart();
           double getSLeg();
           double getSArm();
           double getSChest();
           
};
#endif
