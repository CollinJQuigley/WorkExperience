//****************************************************
//Author:       Collin Quigley
//Date Created: 1/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 1 HW 3.19
//Title:        Pizza Slices
//Description:  Find out how many slices a pizza can have  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	//Declaring
	const double PI = 3.14;
	const double SLICE_SIZE = 14.125;
	double r = 0;
	double diameter = 0;
	double area = 0;
	int slices = 0;
	
	//Receiving
	cout << "Please enter the diameter of the Pizza: ";
	cin  >> diameter;
	
	//Calculating
	r = diameter / 2;
	area = PI * (r * r);
	slices = area / SLICE_SIZE;
	
	//Displaying
	cout << "The most slices this Pizza can have is " << slices << "." << endl << endl;
	
	system("PAUSE");
    return EXIT_SUCCESS;
    
}
