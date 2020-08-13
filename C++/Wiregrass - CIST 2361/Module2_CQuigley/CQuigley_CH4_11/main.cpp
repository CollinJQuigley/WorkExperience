//****************************************************
//Author:       Collin Quigley
//Date Created: 2/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 4.11
//Title:        Geometry Calculator
//Description:  A program that calculates different areas
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    int option;
    double area, radius, length, width, height;
    const double PI = 3.14159;
    
    //Getting info
    cout << "Geometry Calculator\n"
         << "   1. Calculate the area of a Circle\n"
         << "   2. Calculate the area of a Rectangle\n"
         << "   3. Calculate the area of a Triangle\n"
         << "   4. Quit\n\n"
         << "Enter your choice (1-4): ";
    cin  >> option;
    
    //Displaying Info
    switch (option)
    {
           case 1:
                cout << "Please enter the radius of the cirlce: ";
                cin  >> radius;
                area = PI * (radius * radius);
                cout << setprecision(2) << fixed
                     <<"The area is " << area << ".\n\n";
                break;
           case 2:
                cout << "Please enter the length of the rectangle: ";
                cin  >> length;
                cout << "Please enter the width of the rectangle: ";
                cin  >> width;
                area = width * length;
                cout << setprecision(2) << fixed
                     << "The area is " << area << ".\n\n";
                break;
           case 3:
                cout << "Please enter the length of the triangle's base: ";
                cin  >> length;
                cout << "Please enter the height of the triangle: ";
                cin  >> height;
                area = (height * length) / 2;
                cout << setprecision(2) << fixed
                     << "The area is " << area << ".\n\n";
                break;
           case 4:
                cout << "You have quit.\n\n";
                break;                
    }       
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
