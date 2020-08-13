//****************************************************
//Author:       Collin Quigley
//Date Created: 2/2/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 Production Exam
//Title:        Mod1Prod_Quigley
//Description:  Write a program that finds how many slices a pizza can have  
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    const double SLICE_SIZE = 14.125;
    const double PI = 3.14;
    double diameter, radius, area;
    int totalSlices;
    
    //Getting Info
    cout << "Please enter the Diameter of the pizza: ";
    cin  >> diameter;
    
    //Calculating
    radius = diameter / 2;
    area = PI * (radius * radius);
    totalSlices = area / SLICE_SIZE;
    
    //Displaying info
    cout << "The most slices your pizza can have is " << totalSlices << "."
          << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
