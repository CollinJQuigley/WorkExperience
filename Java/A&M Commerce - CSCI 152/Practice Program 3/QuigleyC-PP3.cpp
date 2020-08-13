/*  CSCI 152 Spring 2018       
	Collin Quigley
    Practice Program 3
    User will enter a value (N) which represents the number of values to process
    User enters N numbers in the range of -2147483648 to 2147483647
    User will enter N numbers which will be stored in an array 
    Program will compute and display the sum, average, largest, and smallest of the N numbers
	Program will also search the array for a specific value;
	NOTE - you must have a separate loop to input the data
	a separate loop to sum the data, find the largest and smallest values
	A separate loop is needed to search the array for a specific value
*/
#include<iostream>  // required header file for input/output
using namespace std;

int main()
{    // declare a long array that has 500 elements and other variables required for this program
    double sumAvg, userNum, largest, smallest, userSearch;
	int again, i;
    long userAnws[500];
    
	do // program will execute the code in the loop at least one time
    {
	
	cout<< "Please enter how many numbers you want the program to process.\n";
	cin>> userNum; //Find how many numbers to enter
	cout<< "Please enter the " << userNum << " numbers you want totalled and averaged.\n";	
	cin>> userAnws[0]; //First number entered to set all values
	sumAvg = largest = smallest = userAnws[0]; //Setting all variables
	
	for (i = 1; i < userNum; i++)
		cin>> userAnws[i]; //Entering values to array
	
	for (i = 1; i < userNum; i++)
	{
		if (userAnws[i] < smallest)
			smallest = userAnws[i]; //Finding smallest value
		else if (userAnws[i] > largest)
			largest = userAnws[i]; //Finding largest value in array
		
		sumAvg += userAnws[i]; //Creating sum and average
	}
	
	cout<< "The sum of the numbers you entered is " << sumAvg << " and the average is " << sumAvg/userNum << ".\nThe largest number you entered is " << largest << " and the smallest is " << smallest << ".\n\n";
	cout<< "Please enter a number for the program to search for out of the previously entered numbers.\n";
	cin>> userSearch; //Number user wants to search array with
	
	for (i = 0; i < userNum; i++)
	{
		if (userAnws[i] == userSearch)
			break; //Used to leave for loop if number was found
	}
	
	if (i < userNum) //If statement to display statement if there is no match
		cout<< "A match has been found! The subscript for the first match is " << i << ".\n";
	else		
		cout<< "There was not a match in the list of numbers you previously entered.\n";
		
	// tell the user to input a number which is the number of data values to process
	// write a loop to input the data into an array - only enter data in this loop
	// write a loop to compute the sum, largest and smallest value
	// display results of sum, average, largest and smallest
	// ask user to enter a search value
	// write a loop to search the array for the search value entered by the user
	// if value is found in the array display subscript number (1st occurrence) or display a message the search
	//    value was not found in the array
	
	cout<<" to run the program again enter a 1; to stop the program enter a 0 ";
	cin>>again;
    } while (again != 0);
    
    // pause the program to see the results
    //system("pause"); // this is a windows command; leave this statement in the code
    //return 0;       // optional statement, may be required for .NET compiler
}

