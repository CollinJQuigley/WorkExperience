//****************************************************
//Author:       Collin Quigley
//Date Created: 2/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 5.25
//Title:        Using Files
//Description:  Using a file to output information  
//****************************************************

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	
	
	//Declaring
	double people [5];
	int startYear = 1910;
	ifstream inputFile;
	inputFile.open("People.txt");
	
	//Getting info from file
	for (int i = 0; i <= 5; i++)
		{
			inputFile >> people[i];
		}
	
	//Displaying info
	cout << "PRAIRIEVILLE POPULATION GROWTH\n"
			"(each * represents 1000 people)\n\n";
				
	if (inputFile)
	{		
		for (int j = 0; j <= 5; j++, startYear += 20)
		{
			cout << startYear << ": ";
			
			for (int k = 0; people[j]/1000 > k; k++)
			{
				cout << "*";
			}
			
			cout << endl;
		}		
	}
	
	inputFile.close();

	return 0;
}
