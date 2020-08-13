/*   CSCI 152 Spring 2018
    Collin Quigley          Program 3
    User will enter a value (size) which represents the number of values to process
    user enters size numbers in the range of -2147483648 to 2147483647
    The values entered will be stored in an array of type long that has 10,000 elements
    User will enter a frequency of choice (Frequency, such as 5, or 2500, etc.) 
    program will count and display the number of values in the array which occurred exactly Frequency times
    and display the specific numbers/values which occurred with the user entered value for the Frequency
	Examples using a value of 5 for the required frequency
	Example:  2, 3, 4, 3, 3, 5, 2, 9, 5        number of values with a frequency of 5 is 0
	Example:  10, 1, 8, 5, 1, 5, 4, 1, 5, 1, 1,        1 occurred with a frequency of 5
	Example:  10, 11, 11, 3, 10, 10, 10, 11, 10, 11, 11        10 and 11 occurred with a frequency of 5
*/

#include<iostream>  // required header file for input/output
using namespace std;

// prototypes you must use for this assignment
void input_data(long data[], short size);
void display_data (long data[], short size);
short countOfFrequency (long data[], short size, long FreqNumbers[ ], short Frequency);

int main()
{   // declare local variables
    long data[10000], FreqNumbers[10000];
    short dsize, Fsize, Frequency;
    
    cout<< "Please enter how many numbers you want to store inside your array or 0 to quit.\n";    
	cin>>dsize;
    
	while (dsize > 0)  //pretest loop - will execute while size > 0
    {
       
    	// output a message to enter the values to be processed
    	cout<< "Please enter the " << dsize << " number(s) for your array.\n";
    	// call the input_data function
		input_data(data, dsize);
       
    	// print a message about the number of values stored in the array
    	cout<< "Here are the number(s) you entered in the array.\n";
    	// call the display_data function 
    	display_data(data, dsize);
    	
		// print a message to the user that program will count the number of values which occurred in the array for a
    	// frequency of their choice; ask use to enter a frequency of their choice.
    	cout<< "Please enter a number you want to test the frequency of inside the array or 0 to quit.\n";
    	cin>> Frequency;
    	
    	while (Frequency > 0) // loop to check more than 1 frequency but only 1 at a time
    	{
        	// call countOfFrequency function
        	Fsize = countOfFrequency( data, dsize, FreqNumbers, Frequency);
        	// display a message about the number of values in the FreqNumbers array which occurred exactly Frequency times
        	cout<< "There are " << Fsize << " number(s) that match the frequency " << Frequency << ".\n";
        	
        	// call the display_data function to print the values stored in the FreqNumbers array
        	// this function should not be called if no values occurred with the required frequency
        	if (Fsize != 0)
				display_data(FreqNumbers, Fsize);
        	
        	cout<< "Please enter a number you want to test the frequency of inside the array or 0 to quit.\n";
			// print a message to user that program will count the number of values which occurred in the array for a frequency
        	// of their choice; ask user to enter a frequency of their choice or 0 to terminate the loop.
        	cin>>Frequency;
    	}// end of inner while loop
    	
       cout<<"To run the program again, enter the number of values to store in the array or 0 to terminate the program.\n";
       cin>>dsize;
       
    }// end of outer while loop

    // pause the program to see the results
    //system("pause"); // this is a windows command; will not work in another operating system
   // return 0;       // optional statement, may be required for .NET compiler
}  

//function definitions are placed after main
// Function to display the data in the array 
// print all values on the same line with one space between each number
void display_data(long data[], short size)
{
	short i, j = size - 1;
	
	for (i = 0; i < size; i++)
	{
		if (i == j)
		{
			cout << data[i] << ".\n";
			break;
		}
		else
			cout<< data[i] << ", ";
	}
}
// Do not output anything in the functions below
// Function to input(store) data into the array
void input_data(long data[], short size)
{
	short i;
	
	for (i = 0; i < size; i++)
		cin>> data[i];
}
//Function to return the count of the number of values which occurred exactly Frequency times
// store in the FreqNumbers array the actual values which occurred with a specific frequency
// Look at the last example above, you would store the values of 10 and 11 if the requested frequency was 5.
// If the requested frequency was 1 you would store a 3 in the FreqNumbers array.
short countOfFrequency (long data[], short dsize, long FreqNumbers[ ], short Frequency)
{
	long value; //used to test values
	short nsize = 0, count, i, j;
	
	for ( i = 0; i < dsize; i++)
	{
		value = data[i];
		
		for (j = 0; j < i; j++)
			if (value == data[j])
				break;
		
		if (j < i)
			continue; //to skip below if number already counted
		
		count = 1;
		
		for (j = i + 1; j < dsize; j++)
			if (value == data[j])
				count++;
		
		if (count == Frequency)
			FreqNumbers[nsize++] = value; //assign value to array for freq
	}
	
	return nsize;
}











