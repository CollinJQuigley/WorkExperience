//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2106
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.Chips&Salsa
//Title:        Chips & Salsa
//Description:  Gets info about salsa and displays information   
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

const int SIZE = 5;
const double COST = 1.35, SELLS = 5.5;
string salsaTypes[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int salsaSold[SIZE];

//Prototypes
int totalSold();
string getHighest();
string getLowest();

int main(int argc, char *argv[])
{
    
    //Declaring
	int var = 0; //used to display whatever data is needed at the time
	
	//Getting info
    for (int j = 0; j < SIZE; j++)
	{
		cout << "Please enter jars sold for " << salsaTypes[j] << " salsa: ";
		cin  >> salsaSold[j];
	}//End getting jars sold for
	
    cout << endl;
    	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "The total jars sold for " << salsaTypes[i] << " are " << salsaSold[i] << ".\n";
	}//End displaying jars sold for
	
	cout << endl;
	
	//Displaying info
    var = totalSold();
	cout << "The total jars sold are " << var << ".\n";
	
	cout << "The cost to produce all the jars is $" << (var * COST) << ".\n"
			  << "The total sales for all the jars is $" << (var * SELLS) << ".\n"
			  << "The total profit is $" << ((var * SELLS) - (var * COST)) << ".\n";
			  
	cout << "The highest selling type was " << getHighest() << ".\n"
			  << "The lowest selling type was " << getLowest() << ".\n\n";    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int totalSold()
{
	int total;
	for (int i = 0; i < SIZE; i++)
	{
		total += salsaSold[i];
	}
	
	return total;
}//End totalSold()

string getHighest()
{
	int high = salsaSold[0], name = 0;
	for (int i = 1; i < SIZE; i++)
	{
		if (salsaSold[i] > high)
		{
			high = salsaSold[i];
			name = i;
		}		
	}
	
	return salsaTypes[name];
}//End getHighest()

string getLowest()
{
	int low = salsaSold[0], name = 0;
	for (int i = 1; i < SIZE; i++)
	{
		if (salsaSold[i] < low)
		{
			low = salsaSold[i];
			name = i;
		}		
	}
	
	return salsaTypes[name];
}//End getLowest

