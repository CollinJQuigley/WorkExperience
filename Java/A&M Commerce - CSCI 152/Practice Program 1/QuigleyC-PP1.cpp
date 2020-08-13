/*  CSCI 152 Spring 2018
       Collin Quigley
       Practice Program 1
       User will enter 8 numbers and the program will display the sum and average of the 8 numbers
        Program will also find and display the largest and smallest of the 8 numbers
       user enters 8 numbers in the range of -2147483648 to 2147483647
       Values entered are not required to be displayed
*/
#include<iostream>  // required header file for input/output
using namespace std;

int main()
{    
  	long num, display;
  	long largest = -2147483648;
  	long smallest = 2147483647;
  
  	cout<< "Please enter 8 numbers.\n";
  	cin>> num; //First number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Second number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Third number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Forth number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Fifth number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Sixth number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Seventh number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	cin>> num; //Eighth number
	if (num < smallest)
  		smallest = num;
	if (num > largest)
		largest = num;
	display += num; //To find the average and sum
	
	cout<< "The sum of these numbers you entered are " << display << " and the average is " << display/8 << ".\nThe largest number you entered is " << largest << " and the smallest is " << smallest << ".";
		
}

