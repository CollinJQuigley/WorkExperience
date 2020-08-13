/* CSCI Spring 2018 - Program 9  Collin Quigley      
   program will dynamically allocate memory and read data from a file
   file may contain multiple data sets to process  
   program will compute a frequency distribution using a structure array
   Structure Array will be dynamically allocated and deleted; 
   program will find the mode(s) in the frequency distribution 
   User will select a frequency of their choice to find
pointers must be used in all functions, compare pointers to terminate loops, and use the arrow notation to access the structure array.
*/
#include<fstream>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<new>
using namespace std;

struct Fdistribution // structure definition
{
   short unique, count;
} ;   
//PUT YOUR PROTOTYPES HERE - complete the prototypes that are missing parameters
short * allocate_array_and_read_file(short size, ifstream &filein);
void display_array(short *data, short size);
Fdistribution * frequency_distribution(short *data, short size, short &sizeF);
void display_distribution(Fdistribution frequency[], short sizeF);
short FindMode(short *numbers, short &modeFrequency, Fdistribution *frequency, short sizeF);
short FindSaveFreq  (Fdistribution *frequency, short sizeF, short frequencyNo,  short *numbers);

int main()
{
  short *data,                           // pointer to dynamically allocated single dimension array used for the data set
        size,                                 // number of elements in dynamically allocated memory        
        sizeF,                               // number of elements in structure array
        *numbers,                        // pointer to dynamically allocated array to contain the actual numbers that had a specific frequency
        countN,                            // number of values stored in numbers array
        &numModes = countN,  // numModes and countN share same address in RAM  
        modeFrequency,             // the number of times (frequency) the mode(s) occurred
        frequencyNo,                  // specific frequency of interest to user
        datasetNum = 1;             // number of data set currently being processed
  Fdistribution *frequency;     // pointer to dynamically allocated structure array    
        
  ifstream filein("dataset9.txt");
   
  while(filein>>size)
  {    
    data = allocate_array_and_read_file(size, filein);    
    cout<<"\nData set "<<datasetNum++<<" contains "<<size<<" values\n";
    display_array(data, size);    
    cout<<"\nProgram will compute a frequency distribution\n";          
    frequency = frequency_distribution(data, size, sizeF); // return address of structure array
    cout<<"The Frequency Distribution\n";
    display_distribution(frequency, sizeF);  // display contents of structure array  
    numbers = new(nothrow)short[sizeF];
    // test pointer to verify memory was allocated
    if(!numbers) { cout<<"Memory allocation error for numbers array, program will terminate\n";   system("pause");  exit(0); }
    numModes = FindMode(numbers, modeFrequency, frequency, sizeF);
    cout<<"\nThere were "<<numModes<<" mode(s) in the data set, the mode frequency is "<<modeFrequency<<" the mode value(s) is/are:\n";  
    display_array(numbers, numModes);    
    cout<<"\nFind all numbers that occurred with a frequency of your choice\n"; 
    cout<<"Enter the frequency that you want to find or zero to stop finding frequencies\n";
    cin>>frequencyNo;
    while(frequencyNo>0) // loop to permit user to check many frequencies
    {
       countN = FindSaveFreq (frequency, sizeF, frequencyNo, numbers);
       if(countN) // if the numbers array contains any values, display the values stored in the array
       {
             cout<<countN<<" values that occurred "<<frequencyNo<<" time(s) were found in the "<<size<<" element array\n";
             cout<<"the values are : ";
             display_array(numbers, countN);
       }    
       else 
             cout<<"there were no values in the array that occurred "<<frequencyNo<<" times\n";
       cout<<"\nEnter the frequency that you want to find or zero to stop finding frequencies\n";
       cin>>frequencyNo;  
    }    // end of inner while loop  
    delete [] data; 
    delete [] numbers; 
    delete [] frequency;
    numbers = data = NULL;
    frequency = NULL;
  }      
  cout<<"\nprogram done\n";
  system("pause");
  //return 0;
}

short * allocate_array_and_read_file(short size, ifstream &filein)
{
	short *data, *dataPtr, *dataEnd;
	
	data = dataPtr = new(nothrow)short[size];
	if(!data) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	dataEnd = data + size;
	
	while(dataPtr < dataEnd)
	{
		filein>>*dataPtr++;
	}
	
	return data;
}

void display_array(short *data, short size)
{
	short *end, *dataPtr;
	
	end = data + size;
	dataPtr = data;
	
	while(dataPtr < end)
	{
		cout<< *dataPtr++ << ' ';
	}
	
	cout<< endl;
}

Fdistribution *frequency_distribution(short *data, short size, short &sizeF)
{
	short *dataPtr, *dataEnd, value;
	Fdistribution *FreqDis, *Fend, *Fptr;
	FreqDis = new(nothrow)Fdistribution[size];
	if(!data) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	FreqDis->count = 1;
	FreqDis->unique = *data;
	dataPtr = data + 1;
	dataEnd = data + size;
	Fend = FreqDis+1;
	
	for( ;dataPtr < dataEnd; dataPtr++)
	{
		value = *dataPtr;
		
		for(Fptr = FreqDis; Fptr < Fend; Fptr++ )
		{
			if(value == Fptr->unique)
			{
				Fptr->count++;
				break;
			}
		}
		
		if(Fptr == Fend)
		{
			Fend->unique = value;
			Fend->count = 1;
			Fend++;
		}
	}
	sizeF = Fend-FreqDis;
	
	return FreqDis;
}

void display_distribution(Fdistribution frequency[], short sizeF)
{
	short *FreqPtrU, *FreqPtrC, *FreqPtrUEnd, *FreqPtrCEnd;
	Fdistribution *Fend, *Fptr;
	Fptr = frequency;
	Fend = frequency + sizeF;
	
	cout<< "Value   Frequency\n";
	
	for( ; Fptr < Fend; Fptr++)
	{
		cout<< setw(5) << Fptr->unique << setw(12) << Fptr->count << endl;
	}
}

short FindMode(short *numbers, short &modeFrequency, Fdistribution *frequency, short sizeF)
{
	short *numPtr, *numEnd, sizeN;
	Fdistribution *Fend, *Fptr;
	Fend = frequency + sizeF;
	Fptr = frequency;
	modeFrequency = Fptr->count;
	*numbers = Fptr->unique;
	Fptr++;
	numPtr = numbers;
	
	numEnd = numbers + 1;
		
	for ( ; Fptr < Fend; Fptr++)
	{
		if  (Fptr->count > modeFrequency)
		{
			modeFrequency = Fptr->count;
			*numPtr = Fptr->unique;
			numEnd = numbers + 1;
		}	
		else if ( Fptr->count == modeFrequency)
		{
			*numEnd = Fptr->unique;
			numEnd++;
		}
			
	}	
	
	sizeN = numEnd - numPtr;
	
	return sizeN;
}

short FindSaveFreq  (Fdistribution *frequency, short sizeF, short frequencyNo,  short *numbers)
{
	short fSize, *FreqPtrU, *FreqPtrC, *FreqPtrUEnd, *numPtr;
	Fdistribution *Fend, *Fptr;
	Fptr = frequency;
	Fend = frequency + sizeF;
	numPtr = numbers;
			
	for ( ;Fptr < Fend; Fptr++)
	{
		if (Fptr->count == frequencyNo)
		{
			*numPtr = Fptr->unique;
			numPtr++;
		}
	}
	
	fSize = numPtr - numbers;
	
	return fSize;
}
