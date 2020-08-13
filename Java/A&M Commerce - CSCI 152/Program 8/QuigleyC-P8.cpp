/* CSCI 152 Spring 2018 - Program 8            Collin Quigley
   	program will compute a frequency distribution using a structure array with subscripts
   	program will dynamically allocate memory and read data from a file
   	file may contain multiple data sets to process   
   	Data array will be dynamically allocated and deleted; pointers used in all functions except for
	finding the frequency distribution using a structure array and printing the structure array
*/
#include<fstream>  // header file to read an external file containing data
#include<iostream>
#include<iomanip>
#include<new>
using namespace std;
struct Fdistribution  // Fdistribution becomes a type declarator
{
   short unique, count; // two values for each instance of this structure variable
} ;   
short * allocate_array_and_read_file(short size, ifstream &filein);
void display_array(short *data, short size);
Fdistribution *frequency_distribution(short *data, short size, short &sizeF);
void display_distribution(Fdistribution frequency[], short sizeF);

int main()
{
  short *data,      // pointer to dynamically allocated memory
        size,            // number of elements in dynamically allocated memory        
        sizeF,          // number of values stored in structure array
        datasetNum = 1; // number of data set currently processing
  Fdistribution *frequency;  // pointer to structure array for frequency distribution    
        
  ifstream filein("dataset8.txt");   // open file and set file pointer to file location on C drive
    // NOTE - data file must be in same folder as cpp and/or exe file
  while(filein>>size)  // loop continues while data in file
  {    
    data = allocate_array_and_read_file(size, filein);    
    cout<<"\nData set "<<datasetNum++<<" contains "<<size<<" values\n";
    display_array(data, size);    
    cout<<"\nProgram will compute a frequency distibution\n";
    frequency = frequency_distribution(data, size, sizeF);
    display_distribution(frequency, sizeF);       
    delete [] data;    // delete statement does not change value of pointer
    data = NULL;  
    delete [] frequency;
    frequency = NULL;  
  }      
  cout<<"\nprogram done\n";
  //system("pause");
  //return 0;
}
short * allocate_array_and_read_file(short size, ifstream &filein) // function to dynamically allocate and initialize array
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
	
}     // the data will be read from a file not the keyboard
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
	short *dataPtr, *dataEnd, i, value;
	Fdistribution *FreqDis;
	FreqDis = new(nothrow)Fdistribution[size];
	if(!data) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	FreqDis[0].unique = *data;
	FreqDis[0].count = 1;
	dataPtr = data + 1;
	dataEnd = data + size;
	sizeF = 1;
	
	for( ;dataPtr < dataEnd; dataPtr++)
	{
		value = *dataPtr;
		for (i = 0; i < sizeF; i++)
		{
			if(value == FreqDis[i].unique)
			{
				FreqDis[i].count++;
				break;
			}
		}
		
		if(i == sizeF)
		{
			FreqDis[sizeF].unique = value;
			FreqDis[sizeF++].count = 1;
		}
	}
	
	return FreqDis;
	
}  
void display_distribution(Fdistribution frequency[], short sizeF)
{
	short i;
	
	cout<< "Value   Frequency\n";
	
	for(i = 0; i < sizeF; i++)
	{
		cout<< setw(5) << frequency[i].unique << setw(12) << frequency[i].count << endl;
	}
	
}  

