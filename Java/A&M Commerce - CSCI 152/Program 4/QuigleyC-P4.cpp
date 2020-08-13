/*   CSCI 152 Spring 2018
Program 4       Collin Quigley
Four short arrays with 1000 elements each - data array, numbers array and two other arrays
The user will enter a size value which is the number of values to be stored in the data set
The user will enter the data set to be stored in the data array
The user will enter a number which represents the frequency count of their interest
The program will display the data entered, compute a frequency distribution and find the unique mode if one exists,
find all values in the data set which occur with the frequency entered by the user and store the values in the
numbers array, and display the values stored in the numbers array
*/
#include<iostream>  // required header file for input/output
using namespace std;
//The program must include 5 functions
void inputData(short data[], short size);   // function to enter data into the array
void displayData(short data[], short size); // function to display data in an array
void FrequencyDistribution(short data[], short size, short count[], short &sizeCU /*short unique[]*/); //Did not use sizeCU
short FindMode(short numbers[], short &modeFrequency, short data[], short size, short count[]);
short SaveFreq (short frequency, short numbers[], short data[], short size, short count[]);

int main()
{    
    short data[1000], size, // array for original data to be processed
          numbers[1000],     // array to contain the actual numbers that had a specific frequency
          sizeNumbers,        // number of values store in numbers array
          frequency,             // frequency that user requested to identify in data set
          count[1000],          // array to be used in finding the frequency distribution
          unique[1000],        // array to be used in finding the frequency distribution if needed
          sizeCU,                  // number of values stored in the count and unique arrays
          modeFrequency,    // the number of times (frequency) the mode(s) occurred
          numModes;            // number of modes found in the data set
          
    cout<<"enter the number of values to store in the array or zero to terminate the program\n";
    cin>>size;
    
    while(size>0) // loop to permit user to test many data sets
    {
        cout<<"enter "<<size<<" numbers from the keyboard\n";
        inputData(data, size);
        
        // print the contents of the array
        cout<<"there are "<<size<<" values in the array\n";
        displayData(data, size);
        
        FrequencyDistribution(data, size, count, sizeCU/*unique array if needed*/);
        numModes = FindMode(numbers, modeFrequency, data, size, count);
        
        cout<<"There were "<<numModes<<" mode(s) in the data set, the mode frequency is "<<modeFrequency<<" the mode value(s) is/are:\n";  
        displayData(numbers, numModes);
        
        cout<<"\nthe program will count the number of values that occurred with a specific frequency in the array\n";   
        cout<<"enter the frequency that you want to find or zero to stop finding frequencies\n";
        cin>>frequency;
        
        while(frequency>0) // loop to permit user to check many frequencies
        {
           sizeNumbers = SaveFreq (frequency, numbers, data, size, count);
           
           if(sizeNumbers) // if the numbers array contains any values, display the values stored in the array
           {
             cout<<sizeNumbers<<" values that occurred "<<frequency<<" time(s) were found in the "<<size<<" element array\n";
             cout<<"the values are: ";
             displayData(numbers, sizeNumbers);
           }    
           else 
             cout<<"there were no values in the array that occurred "<<frequency<<" times\n";
             
           cout<<"enter the frequency that you want to find or zero to stop finding frequencies\n";
           cin>>frequency; 
		    
        }    // end of inner while loop
        cout<<"enter the number of values to store in the array or zero to terminate the program\n";
        cin>>size;  
        
    }    // end of outer while loop
     system("pause");      // pause the program to see the results
    //return 0;       // optional statement, may be required for .NET compiler
}
//function definitions are placed after main
// Function to display the data in the array, print all values on the same line with one space between each number
void displayData(short data[], short size)
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
// Do not output anything in these functions
// Function to input(store) data into the array
void inputData(short data[], short size)
{   
	short i;
	
	for (i = 0; i < size; i++)
		cin>> data[i];
}
// Function to compute a frequency distribution using one of the algorithms described below
void FrequencyDistribution(short data[], short size, short count[], short &sizeCU /*short unique[]*/) //Did not use sizeCU
{  
	short i, value, j;
	count[0] = 1;
	
	for ( i = 1; i < size; i++)
	{
		value = data[i];
		count[i] = 0;
		
		for (j = 0; j < i; j++)
			if (value == data[j])
			{
				break;
			}	
								
		count[j]++;
		
	}	
}
// Function to count the number of modes in the data set and return the count.  Function will also store the actual mode
//    value(s) in the numbers array.
short FindMode(short numbers[], short &modeFrequency, short data[], short size, short count[])
{   
	short i, sizeN = 1;
	numbers[0] = data[0];
	modeFrequency = count[0];
	
	for (i = 1; i < size; i++)
	{
		if  (count[i] > modeFrequency)
		{
			modeFrequency = count[i];
			numbers[0] = data[i];
			sizeN = 1;
		}	
		else if ( count[i] == modeFrequency)
			numbers[sizeN++] = data[i];
	}	
		
		return sizeN;
}
// Function to return the count of the number of values which occurred exactly frequency times.  The function will store in 
// the numbers array the specific numbers that occurred with the frequency value passed to the function.
short SaveFreq (short frequency, short numbers[], short data[], short size, short count[])
{   
	short fSize = 0, i;
	
	for ( i = 0; i < size; i++)
	{
		if (count[i] == frequency)
		{
			numbers[fSize++] = data[i];
		}
	}
	
	return fSize;
}
