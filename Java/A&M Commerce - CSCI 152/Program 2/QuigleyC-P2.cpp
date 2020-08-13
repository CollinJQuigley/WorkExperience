/*	CSCI 152 Spring 2018
    Collin Quigley       Program 2
    User will enter a value (N) which represents the number of values to process
    user enters N numbers in the range of -32768 to 32767
    The values entered will be stored in an array of type short that has 1,000 elements
    program will count the number of different (distinct/unique) values in the array
    The count (number) of different values will be displayed (no other output is necessary)
	Examples - different values stored in the array.
	Example:  2, 3, 4, 3, 3, 5, 2, 9, 5        count of unique values is 5; number of duplicates 4
	Example:  10, 9, 8, 7, 6, 5, 4, 3, 2, 5, 1,        count of unique values is 10; number of duplicates 1
	Example:  10, 10, 10, 10, 10, 10, 10, 10, 10, 10        count of unique values is 1; number of duplicates 9
*/
#include<iostream> 
using namespace std;

void input_data(short data[], short size);
void display_data (short data[], short size);
short count_distinct(short num[], short size);  
short count_duplicates(short num[], short size);  

int main()
{   
    short data[1000], size, distinct, duplicates;  
    
    cout<< "Please enter how many numbers you want to store inside your array or 0 to quit.\n";
    cin>>size;
    
    while (size > 0)  //pretest loop - will execute while size > 0
    {
       cout<< "Please enter the " << size << " number(s) for your array.\n";
	   input_data(data, size);
	   // call the input_data function
	   
	   cout<< "Here are the number(s) your entered in the array.\n";
       // print a message about the number of values stored in the array
       
       display_data(data, size);
       // call the display_data function
       
       distinct = count_distinct(data, size);
       // call count_distinct function
       
       cout<< "There are " << distinct << " number(s) in the array that are unique.\n";
       // display a message about the number of unique/distinct values in the array
       
       duplicates = count_duplicates(data, size);
       // call count_duplicates function
       
       cout<< "There are " << duplicates << " number(s) in the array that are duplicates.\n";
       // display a message about the number of duplicate values in the array
       
       cout<<"To run the program again, enter the number of values to store in the array or 0 to terminate the program.\n";
       cin>>size;
    }
    
    // pause the program to see the results
    //system("pause"); // this is a windows command; will not work in another operating system
    //return 0;       // optional statement, may be required for .NET compiler
}  

//function definitions are placed after main
// Function to display the data in the array 
// print all values on the same line with one space between each number
void display_data(short data[], short size)
{   
	int i, j = size - 1;
	
	for (i = 0; i < size; i++)
	{
		if (i == j)
		{
			cout << data[i] << ".\n";
			break;
		}
		cout<< data[i] << ' ';
	}
}

// Do not output anything in these functions
// Function to input(store) data into the array
void input_data(short data[], short size)
{   
	int i;
	for (i = 0; i < size; i++)
		cin>> data[i];
}

//Function to return the count of the number of unique/distinct values in the array
short count_distinct(short num[], short size)
{  
	short dis = size, test[size] = {0}; // dis is short for distinct
	int i, j;
	
	test[0] = num[0];
	
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (num[i] == test[j])
			{
				dis--;
				break;
			}
					
		}
		
		if (j == size)
		{
			test[i] = num[i];
		}
		
	}

	return dis;
}

//Function to return the count of the number of duplicate values in the array
short count_duplicates(short num[], short size)
{  
	short dup = 0; // dup is short for duplicate
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (num[i] == num[j])
			{
				dup++;
				break;
			}
		}
	}
	
	return dup;
}

