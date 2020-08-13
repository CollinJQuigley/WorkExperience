/* CSCI 152 Spring 2018
    Program 6: First Program using pointers for array access and dynamic memory allocation
    Collin Quigley
    program will enter data into two single dimension arrays (no duplicate values in arrays)
    program will find the union and intersection of the two arrays
    program will display the union and intersection  */    

#include<iostream>
#include<new> // header file required for dynamic allocation of memory
using namespace std;

void inputData(short *data, short size);   // function to enter data into the array
void displayData(short *data, short size); // function to display data in an array
void get_union(short *set1, short size1, short *set2, short size2, short *&union_array, short &size_union);  // look at call statement to assist in completing this statement
short *get_intersection(short *set1, short size1, short *set2, short size2, short &size_intersection);  // look at call statement to assist in completing this statement
//void get_union_intersection(complete this prototype);  // look at call statement to assist in completing this statement
int main()
{    
    short *set1, size1,  // first data set and size; do not put duplicate values in the data set
             *set2, size2,   // second data set and size
             *union_array, size_union,  // array to store the union of the two sets
             *intersection, size_intersection;  // array to store the intersection of the two sets
         
    cout<<"Program will find the union and intersection of two sets of data\n";
    cout<<"enter the number of values to store in the data set 1 \n   or zero to terminate the program\n";
    cin>>size1;
    while(size1) // loop to permit user to test many data sets
    {
        set1 = new(nothrow)short[size1];
       // test pointer to verify memory was allocated       
        if(!set1) { cout<<"Memory allocation error, program will terminate\n";   system("pause");  exit(0); }
        inputData(set1, size1);    
        // print the contents of the array
        cout<<"\nthere are "<<size1<<" values in the array set1\n";
        displayData(set1, size1);
        cout<<"enter the number of values to store in the data set 2\n";    
        cin>>size2;
        set2 = new(nothrow)short[size2];
       // test pointer to verify memory was allocated
        if(!set2) { cout<<"Memory allocation error, program will terminate\n";   system("pause");  exit(0); }
        inputData(set2, size2);  
        cout<<"\nthere are "<<size2<<" values in the array set2\n";
        displayData(set2, size2);
        // comment out the next two lines to compute union and intersection in one function
        get_union(set1, size1, set2, size2, union_array, size_union);        
        intersection = get_intersection(set1, size1, set2, size2, size_intersection);
        // uncomment following line if you want to write 1 function to get the union and intersection
        //get_union_intersection(set1, size1, set2, size2, union_array, size_union, intersection, size_intersection);
        cout<<"the union array contains "<<size_union<<" values\n";
        displayData(union_array, size_union);
        if(size_intersection)// intersection array may be empty, must test size
        {
           cout<<"the intersection array contains "<<size_intersection<<" values\n";
           displayData(intersection, size_intersection); 
        }    
        else
           cout<<"there are no values in the intersection of the two data sets\n";
        cout<<"\nenter the number of values to store in the data set 1 \n   or zero to terminate the program\n";
        cin>>size1;
        // delete memory previously allocated
        delete [] union_array;
        delete [] intersection;
        delete [] set1;
        delete [] set2;
    }    
    // pause the program to see the results
    // system("pause");
     return 0;       
}

void inputData(short *data, short size)
{
	
	short *end = data + size;
	
	cout<< "Please enter " << size << " numbers.\n";
	
	for( ; data < end; data++)
	{
		cin>> *data;
	}
}

void displayData(short *data, short size)
{
	
	short *end = data + size;
	
	for( ; data < end; data++)
	{
		cout<< *data << ' ';
	}
	
	cout<< endl;
}

void get_union(short *set1, short size1, short *set2, short size2, short *&union_array, short &size_union)
{
	
	short *preset1 = set1, *end2 = set2 + size2, *end1 = set1 + size1, *union_end;
	
	union_array = new(nothrow)short[size2 + size1];
	if(!union_array) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	memcpy ( union_array, set1, size1*sizeof(short) );
	
	union_end = union_array + size1;
	
	for( ;set2 < end2; set2++)
	{
		for(preset1 = set1; preset1 < end1; preset1++)
		{
			if(*set2 == *preset1)
				break;
		}
		
		if (preset1 == end1)
		{
			*union_end = *set2;
			union_end++;
		}
	
	}	
	
	size_union = union_end - union_array;
}

short *get_intersection(short *set1, short size1, short *set2, short size2, short &size_intersection)
{
	
	short *inter_array, *end2 = set2 + size2, *end1 = set1 + size1, *preset1, *inter_end;
	
	if (size2 < size1) //Assign intersection array size to smallest size
	{
		inter_array = new(nothrow)short[size2];
		if(!inter_array) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	}
	else
	{
		inter_array = new(nothrow)short[size1];
		if(!inter_array) { cout<< "Memory allocation error, program will terminate\n";   system("pause");  exit(0);	}
	}
	
	inter_end = inter_array;
	
	for( ;set2 < end2; set2++)
	{
		for(preset1 = set1; preset1 < end1; preset1++)
		{
			if(*set2 == *preset1)
			{
				*inter_end = *preset1;
				inter_end++;
				break;
			}
		}
	}
	
	size_intersection = inter_end - inter_array;
		
	return inter_array;
	
}
