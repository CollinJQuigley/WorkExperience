/* CSCI 152 Spring 2018 - Program 7 
    Collin Quigley
    program will enter data into two single dimension arrays (do not store duplicate values in arrays)
    program will find the union and intersection of the two arrays using one function
    program will find the symmetric difference of two arrays
    program will display the union, intersection, and symmetric difference   */    

#include<iostream>
#include<new>
using namespace std;

short* input_data(short size);   // function to dynamically allocate and array and enter data into the array
void display_data(short *data, short size); // function to display data in an array
void get_union_intersection(short *set1, short size1, short *set2, short size2, short *&union_array, short &size_union, short *&intersection, short &size_intersection);
void get_SymmetricDifference(short *set1, short size1, short *set2, short size2, short *&SD_array, short &size_SD); 

int main()
{    
    short *set1, size1,  // first data set and size
          *set2, size2,   // second data set and size
          *union_array, size_union,  // array to store the union of the two sets
          *intersection, size_intersection,  // array to store the intersection of the two sets
          *symmetricdifference, size_SD;  // array to store the symmetric difference of the two sets
         
    cout<<"Program will find the union, intersection and symmetric difference of two sets of data\n";
    cout<<"enter the number of values to store in the data set 1 \n   or zero to terminate the program\n";
    cin>>size1;
    while(size1) // loop to permit user to test many data sets
    {
        cout<<"Enter "<<size1<<" values into the first set\n";
        set1 = input_data(size1);           
        // print the contents of the array
        cout<<"\nthere are "<<size1<<" values in the array set1\n";
        display_data(set1, size1);
        cout<<"enter the number of values to store in the data set 2\n";    
        cin>>size2;
        cout<<"Enter "<<size2<<" values into the second set\n";
        set2 = input_data(size2);  
         // test pointer to verify memory was allocated          
        cout<<"\nthere are "<<size2<<" values in the array set2\n";
        display_data(set2, size2);        
        get_union_intersection(set1, size1, set2, size2, union_array, size_union, intersection, size_intersection);
        cout<<"\nthe union array contains "<<size_union<<" values\n";
        display_data(union_array, size_union);
        if(size_intersection)// intersection array may be empty, must test size
        {
           cout<<"the intersection array contains "<<size_intersection<<" values\n";
           display_data(intersection, size_intersection); 
        }    
        else
           cout<<"there are no values in the intersection of the two data sets\n";
        get_SymmetricDifference(set1, size1, set2, size2, symmetricdifference, size_SD);   
        if(size_SD)
        {
           cout<<"the symmetric difference array contains "<<size_SD<<" values\n";
           display_data(symmetricdifference, size_SD); 
        }    
        else
           cout<<"there are no values in the symmetric difference of the two data sets\n";   
        cout<<"\nenter the number of values to store in the data set 1 \n   or zero to terminate the program\n";
        cin>>size1;
        // delete memory previously allocated
        delete [] union_array;
        delete [] intersection;
        delete [] symmetricdifference;
        delete [] set1;
        delete [] set2;
    }    
    // pause the program to see the results
     system("pause");
     return 0;       
} 

short* input_data(short size)
{
	short *end, *data, *dataPtr;
	
	data = dataPtr = new(nothrow)short[size];
	if(!data) { cout<< "Memory allocation error, program will terminate\n"; system("pause"); exit(0);	}
	
	end = data + size;
	
	while( dataPtr < end )
	{
		cin>> *dataPtr++;
	}
	
	return data;
	
}

void display_data(short *data, short size)
{
	
	short *end, *dataPtr;
	
	end = data + size;
	dataPtr = data;
	
	while( dataPtr < end)
	{
		cout<< *dataPtr++ << ' ';
	}
	
	cout<< endl;
	
}

void get_union_intersection(short *set1, short size1, short *set2, short size2, short *&union_array, short &size_union, short *&intersection, short &size_intersection)
{
	
	short *set1End, *set1Ptr, *set2End, *set2Ptr, *unionPtr, *interPtr, value;
	
	if (size2 < size1) //Assign intersection array size to smallest size
	{
		intersection = interPtr = new(nothrow)short[size2];
		if(!intersection) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	}
	else
	{
		intersection = interPtr = new(nothrow)short[size1];
		if(!intersection) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	}
	
	union_array = new(nothrow)short[size1 + size2];
	if(!union_array) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	
	memcpy ( union_array, set1, size1*sizeof(short) );
	set1End = set1 + size1;
	set2End = set2 + size2;
	set1Ptr = set1;
	set2Ptr = set2;	
	unionPtr = union_array + size1;
	
	for( ; set2Ptr < set2End; set2Ptr++)
	{
		value = *set2Ptr;
		for(set1Ptr = set1; set1Ptr < set1End; set1Ptr++)
		{		
			if(value == *set1Ptr)
			{
				*interPtr = value;
				interPtr++;  
				break;
			}
			
		}

		if(set1Ptr == set1End)
		{
			*unionPtr = value;
			unionPtr++;
		}
			
	}

	size_union = unionPtr - union_array;
	size_intersection = interPtr - intersection;
	
}

void get_SymmetricDifference(short *set1, short size1, short *set2, short size2, short *&SD_array, short &size_SD)
{
	short *flag, *flagPtr, *set1End, *set1Ptr, *set2End, *set2Ptr, *SDPtr, value, flag_size;
	
	flag = flagPtr = new(nothrow)short[size2];
	if(!flag) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	
	SD_array = SDPtr = new(nothrow)short[size1 + size2];
	if(!SD_array) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	
	set1End = set1 + size1;
	set2End = set2 + size2;
	set1Ptr = set1;
	set2Ptr = set2;	
	fill(flagPtr, flagPtr + size2, 0);
	
	for( ;set1Ptr < set1End; set1Ptr++)
	{
		
		value = *set1Ptr;
		
		for(flagPtr = flag, set2Ptr = set2 ;set2Ptr < set2End; set2Ptr++, flagPtr++)
		{
			if(value == *set2Ptr)
			{
				*flagPtr = 1; 
				break;
			}
			
		}
		
		if(set2Ptr == set2End)
		{
			*SDPtr = value;
			SDPtr++;
		}	
	}
	
	for(set2Ptr = set2, flagPtr = flag; set2Ptr < set2End; set2Ptr++, flagPtr++)
	{
		if(*flagPtr != 1)
		{
			*SDPtr = *set2Ptr;
			SDPtr++;
		}
	}
	
	size_SD = SDPtr - SD_array;
	
	/* 
	The delete statements here caused my program to crash. Do they need to be in main?
	delete [] flag;
	delete [] flagPtr;
	*/
}
