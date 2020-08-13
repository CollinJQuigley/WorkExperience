/*   CSCI 152 Spring 2018
     Collin Quigley     Program 1
     User will enter a value (size) which represents the number of values to process
     The values entered will be stored in an array of type short that has 1000 elements
     User will enter size numbers     
     The user will enter a search value; 
     The program will check the array for the order of the data (random or ascending order) 
     The program will search the data for a specific value using a sequential and/or binary search algorithm 
     program will display a message in which element the value was found or display a message the value was not found
     Program will contain four simple functions described below
*/
#include<iostream>  // required header file for input/output
using namespace std;

// function prototypes
void input_data(short data[], short size);
void binary_search(short data[], short size, short search_value, short &offset);
void check_order(short data[], short size, short &order);  
void sequential_search(short data[], short size, short search_value, short &offset);

int main()
{   // declare local variables
    short order, search_again, size, data[1000], offset, search_value;  

    cout<< "Please enter how many numbers you want to store inside the array.\n";
    cin>> size;
    
	while(size>0)
    {
       	cout<< "Please enter your numbers.\n";
	   	input_data(data, size);	// call the function to input the data into the array
	   
	   	check_order(data, size, order);	// call check_order function to determine if data is random or ordered
	   
	   	if (order == 0)
	   		cout<< "Your numbers are not in ascending order.\n";
		else
			cout<< "Your numbers are in ascending order.\n";
       
      	do	// posttest loop - will execute at least one time 
      	{
         	cout<< "Please enter a value to search for inside the array.\n";
         	cin>> search_value; 
		 
         	if( order == 0)
         	{	
				sequential_search(data, size, search_value, offset);	// call sequential_search function
            	
            	if (offset == - 1)	// display a message to output the element # where search value was found or message value not found - IF test
            		cout<< "The program did not find a match using Sequential Search with the number you entered.\n";
            	else
            		cout<< "A match was found using Sequential Search! The element number for the match was " << offset << ".\n";

         	}   
         	else // data not in random order (ascending order)
         	{				
				binary_search(data, size, search_value, offset);	// call binary_search function
            	
            	if (offset == - 1)	// display a message to output the element # where search value was found or message value not found - IF test
            		cout<< "The program did not find a match using Binary Search with the number you entered.\n";
            	else
            		cout<< "A match was found using Binary Search! The element number for the match was " << offset << ".\n";
			 
            	sequential_search(data, size, search_value, offset);	// call sequential_search function
            	
            	if (offset == - 1)	// display a message to output the element # where search value was found or message value not found  - IF test
            		cout<< "The program did not find a match using Sequential Search with the number you entered.\n";
            	else
            		cout<< "A match was found using Sequential Search! The element number for the match was " << offset << ".\n";
         	} 
			    
         	cout<< "To search for another number enter the digit 1 otherwise enter the digit 0.\n";
         	cin>> search_again;
         
      	}while(search_again != 0);
      
      	cout<<"To process another date set enter the size of the data set or 0 to terminate the program.\n";
      	cin>>size;
    } // end of while loop
    
    // pause the program to see the results LEAVE THE FOLLOWING STATEMENT IN THE PROGRAM
    //system("pause"); // this is a windows command; will not work in another operating system
    //return 0;       // optional statement, may be required for .NET compiler
} 
 
// function definitions are placed after main
// Do not output anything from these functions
// Function to input(store) data into the array
void input_data(short data[], short size)
{   
	int i;
	for (i = 0; i < size; i++)
		cin>> data[i];
}

// Function to search the array using a binary search algorithm.
// return the subscript/element # where found or return -1 if not found.
void binary_search(short data[], short size, short search_value, short &offset)
{   
	short mid, start = 0, stop = size -1;
	offset = -1;
	
	while(start <= stop)
	{
		mid = (start + stop)/2;
		
		if (search_value < data[mid])
			stop = (mid - 1);
		else if (search_value > data[mid])
			start = (mid + 1);
		else
		{
			offset = mid; 	// Remove this line to be replaced
			break;			// Remove this line as well to be replaced
			/*Code below is to replace code inside the second else statement to verify first instance is found
				while (data[mid] == data[mid - 1])
				{
					mid--;
				}
				offset = mid;
				break;
			*/
		}
	}
}

// Function to check the order of the data
// Assign a 0 to order if random or descending order, otherwise assign a 1(ascending order)
void check_order(short data[], short size, short &order)
{    
	int i, j;
	order = 1;
	
	for (i = 0, j = 1; j < size; i++, j++)
	{
		if (data[i] > data[j])
		{
			order = 0;
			break;
		}
	}
}

// Function to search the array using a sequential search algorithm.  
// Assign the subscript/element # to offset where found or assign offset -1 if not found.
// find the first occurrence of the search value
void sequential_search(short data[], short size, short search_value, short &offset)// 
{   
	int i;
	offset = -1;
	
	for (i = 0; i < size; i++)
	{
		if (data[i] == search_value)
		{
			offset = i;
			break;
		} 
	}
}

