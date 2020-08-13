/* CSCI 152 Fall 2017 Program 5 - Collin Quigley
   program will obtain data for a two dimension array from the keyboard
   user can enter multiple data sets to process
   user will enter a search value to find in the two dimension array
   program will find the locations (row and column number) where the search value occurred and store the row
   and column number in successive rows of a two dimension array
   user will continue searching for values until they want to quit
*/

#include<iostream>
#include<iomanip>  // header file to use I/O manipulators for display
#include<stdlib.h>
using namespace std;

void input2d(short data[][15], short rows, short cols);
void display_2darray1(short data[][15], short rows, short cols);
void display_2darray2(short locations[][2], short Rsize); //Removed 2 because it was giving me a compiler error. Once removed the error stopped.
void find_value(short data[][15], short rows, short cols, short locations[][2], short &Rsize, short searchValue);


int main()
{
  short data[15][15],       // original data set with 15 rows and 15 columns
        rows,                      // number of rows of data in 2 dimension array 
        cols,                       // number of columns of data in 2 dimension array 
        locations[225][2],  // array to store the locations (row and column offsets) of the search value
        Rsize,                    // number of rows in locations array that contain a value
        search_value,        // search value entered by user              
        response;               // input from user to continue inner loop
          
  cout<<"Enter the number of rows of data you want to store in the 2D array ";
  cin>>rows; 
  while(rows > 0) 
  {    
    cout<<"Enter the number of columns of data you want to store in the 2D array ";
    cin>>cols;
    cout<<"Data entered into the array will be stored by rows\n";
    cout<<"Enter "<<rows*cols<<" values to be stored in the array\n";
    input2d(data, rows, cols);
    cout<<"the array has "<<rows<<" rows and "<<cols<<endl;
    display_2darray1(data, rows, cols);
   
    do  // post test loop to search 2 dimension array, will execute at least 1 time
    {
      cout<<"enter a search value to find in the two dimension array\n)";
      cin>>search_value;
      find_value(data, rows, cols, locations, Rsize, search_value);
      if(Rsize)
      {
        cout<<"the search value was found in "<<Rsize<<" locations in the two dimension array\n";
        display_2darray2(locations, Rsize);
      }    
      else
        cout<<"the search value was not found in the array\n";
        
      cout<<"do you want search for another value in the array? 1-yes, 0-no\n";
      cin>>response;  
    } while(response);  //end do-while
    cout<<"Enter the number of rows of data you want to store in the 2D array or 0 to terminate the program ";
    cin>>rows; 
  } // end while     
  cout<<"\nprogram done\n";
  //system("pause");
}

void input2d(short data[][15], short rows, short cols)
{
	short i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
			cin>> data[i][j];
	}
}

void display_2darray1(short data[][15], short rows, short cols)
{
	short i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
			cout<< setw(5) << data[i][j];
			
		cout<< endl;
	}
}

void display_2darray2(short locations[][2], short Rsize)
{
	short i, j;
	
	for(i = 0; i < Rsize; i++)
	{
		for(j = 0; j < 2; j++)
		{
			cout<< setw(5) << locations[i][j];
		}
		
		cout<< endl;
	}
}

void find_value(short data[][15], short rows, short cols, short locations[][2], short &Rsize, short searchValue)
{
	short i, j;
	Rsize = 0;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if(data[i][j] == searchValue)
			{
				locations[Rsize][0] = i;
				locations[Rsize][1] = j;
				Rsize++;
			}
		}
	}
}
