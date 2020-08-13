/*   CSCI 152 Spring 2018
       Collin Quigley
       Practice Program 2
       User will enter a value (N) which represents the number of values to process
       User will enter N numbers and the program will display the sum and average of the N numbers
       Program will also find and display the largest and smallest of the N numbers
       user enters N numbers in the range of -2147483648 to 2147483647
       NOTE - you must have a loop to input the data, sum the data, and find largest and smallest values.
*/
#include<iostream>  // required header file for input/output
using namespace std;

int main()
{    
// tell the user to input a number which is the number of data values to process
// Is the For loop the best loop for this problem? 
// arrays are not used in this program

	long num, display, userNum, largest, smallest;
	int i;
	
	cout<< "Please enter how many numbers you want the program to process.\n";
	cin>> userNum;
	cout<< "Please enter the " << userNum << " numbers you want summed and averaged.\n";
	
	cin>> num;
	display = largest = smallest = num; 
	
	for (i = 1; i < userNum; i++)
	{
		cin>> num;
		if (num < smallest) //Find smallest number
  			smallest = num;
		if (num > largest) //Find largest number
			largest = num;
		display += num; //Find the average and sum
	}
  	
  	cout<< "The sum of these numbers you entered is " << display << " and the average is " << display/userNum << ".\nThe largest number you entered is " << largest << " and the smallest is " << smallest << ".";

    // pause the program to see the results
    //system("pause"); // this is a windows command; will not work in another operating system
    //return 0;       // optional statement, may be required for .NET compiler
}

