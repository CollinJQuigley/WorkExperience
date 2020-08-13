/*  CSCI 152 Spring 2018
    Collin Quigley 
    Practice Program 0
    User will enter 5 numbers and the program will display the 5 numbers, the sum, and average of the 5 numbers
    User enters numbers in the range of -32768 to 32767
*/
#include<iostream> // required header file for input/output
using namespace std;

int main()
{   //necessary statements to implement the logic go here
    short num1, num2, num3, num4, num5, sum, avg;
    cout<< "Enter 5 numbers that will be summed and averaged.";
    cout<< "\nNumbers must be in the range from -32768 to 32767." <<endl;
    //all 5 variables could be put on the same input statement
    cin>> num1 >> num2;
    cin>> num3 >> num4 >> num5;
    //cin>> num1 >> num2 >> num3 >> num4 >> num5; //Optional input statement
    sum = num1 + num2 + num3 + num4 + num5;
	cout<< "The 5 numbers you entered are " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5;
	cout<< "." << endl; //Moved to second line because it was giving me error saying that ";" was needed after num5
    cout<< "The sum of the 5 numbers entered is " << sum << "; the average is " << sum/5 << "." << endl;
    //optional code to compute and display average
    //avg = sum/5
    //cout<< "The sum of the 5 numbers is " << sum << "; the average is " << avg << "." << endl;
    
//Pause the program to see the results
//System('pause"); //This is a windows command; will not work on another operating system
//return 0 //Optional statement, may be required for .NET compiler
}
