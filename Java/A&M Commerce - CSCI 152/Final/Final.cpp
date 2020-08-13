/* CSCI 152 Spring 2018 - Dr. Creider - Final exam
     program will enter data into a single dimension array (duplicate values may be in arrays)
     program will find the forth duplicate in the array if it exists
     program will count the maximum number of times any value occurs in consecutive elements in an array
*/    

#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<new>
using namespace std;

void display_data(short *data, short size);         // function to display data in an array
short *FindFourthDuplicate(short *data, short size, short &value); // function to find the address of the forth duplicate value
// ############################ complete the following prototype  ##################
void input_data(short *&data, short size, short *&numbers); 
short CountMaximumSequence(short *data, short size, short *&numbers, short &count);  // function to find max number of consecutive instances of SV

int main()
{    
    short *data, size,  // pointer to data array and size                        
          count,        // represents the maximum number of times any value occurred in consecutive elements       
          value,        // value of the forth duplicate or a number found in a sequence
          *location,    // address of fourth duplicate value
          *numbers,     // pointer to numbers array in which to store values identifiied in the CountNaximumSequence function
          Ncount;       // number of elements in the numbers array assigned a value
    short setNO=1;      // keeps track of the number of data sets entered
         
    cout<<"Program will store data in the array\n";
    cout<<"Program will check the array for the address of the fourth duplicate value\n";
    cout<<"Program will also find the maximum sequence of any value in consecutive elements\n";   
    cout<<"\nenter the number of values to store in the array\n   or zero to terminate the program\n";   
    cin>>size;
    while(size) // loop to permit user to test many data sets   
    {       
        input_data(data, size, numbers);  // function you define
        // print the contents of the array
        cout<<"\nthere are "<<size<<" values in the array - DataSet "<<setNO++<<endl;        
        display_data(data, size);      
        // check the array for the forth duplicate value   
        // system("pause");     
        location = FindFourthDuplicate(data, size, value);
        if(location) // if true, the address of the forth duplicate value was found
          cout<<"The fourth duplicate was found at element number "<<location-data<<", the value was "<<value<<endl; 
        else
          cout<<"the array did not contain any duplicates or there was not a forth duplicate value\n";      
        // find the number that has the maximum number of occurrences in consecutive elements                                               
        Ncount = CountMaximumSequence(data, size, numbers, count); 
        if(Ncount) 
        { 
          cout<<Ncount<<" numbers occurred in a maximum of "<<count<<" consecutive elements of the array\n";
          display_data(numbers, Ncount);
        }  
        else                
          cout<<"No value occurred in consecutive elements in the data set\n";  
        delete [] data;
        delete [] numbers;                                 
        //cout<<"\nenter the number of values to store in the array for a new data set\n   or zero to terminate the program\n";
        //cin>>size;
    }    
    // pause the program to see the results
     //system("pause");
     //return 0;       
}

void display_data(short *data, short size)
{
    short i;
    for(i = 0; i < size; i++)
    { // display the numbers in the array separated by 1 blank all on the same line           
      cout<<data[i]<<' '; 
    } 
    cout<<endl<<endl;     
}

short *FindFourthDuplicate(short *data, short size, short &value)
{
	short *dataEnd, *dataFind, *dataTest, dup;
	dataFind = data + 1;
	dataEnd = data + size;

	for( ; dataFind < dataEnd; dataFind++)
	{
		for (dataTest = data; dataTest < dataFind; dataTest++)
		{
			if (*dataFind == *dataTest)
				dup++;

			if(dup == 4)
			{
				value = *dataFind;
				return dataFind + 1;
			}
		}
	}

	return NULL;
}

short CountMaximumSequence(short *data, short size, short *&numbers, short &count)
{
	short *dataPtr, *dataEnd, *dataTest, *dataVerify, *numPtr, numStored;
	dataPtr = data + 1;
	dataVerify = data + 2;
	dataTest = data;
	dataEnd = data + size;
	numPtr = numbers;
	count = 0;
	
	for ( ; dataPtr < dataEnd; dataPtr++, dataTest++, dataVerify++)
	{
		if (*dataTest == *dataPtr)
		{
			count++;
			*numPtr = *dataPtr;
			numPtr++;
		}
	
		if (*dataTest == *dataVerify) 
//This test is to increase the ptr if the next number is the same so the previous number won't be reused
		{
			dataTest++;
			dataPtr++;
			dataVerify++;
		}
	}
	
	numStored = numPtr - numbers;
	
	return numStored;
	
}

void input_data(short *&data, short size, short *&numbers)
{
	short *dataPtr, *dataEnd;
	data = new(nothrow)short[size];
	if (!data) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	numbers = new(nothrow)short[size/2];
	if (!numbers) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	dataPtr = data;
	dataEnd = data + size;
	
	while (dataPtr < dataEnd)
	{
		cin>> *dataPtr;
		dataPtr++;
	}
	
}

