//****************************************************
//Author:       Collin Quigley
//Date Created: 4/24/2016
//Class:        CIST 2361 - Cpp
//Project:      Module FINAL
//Title:        Library System
//Description:  A functional library system
//****************************************************

#include <iostream>

using namespace std;

//prototypes
void libraryMenu();

int main(int argc, char *argv[]) //Only have menu set up so far
{
	
	//Declaring
	int menuOption = 0, loginOption = 0;
	
	libraryMenu();
	
	do
	{
			
		cout << "1. Librarian login" << endl
			 << "2. Patrons Login" << endl
			 << "3. Quit" << endl 
			 << "Please select an option: ";
			 
		cin  >> loginOption;
		
		if (loginOption < 0 || loginOption > 4)
			cout << "Please enter valid option" << endl;	
				
	}while (loginOption > 0 && loginOption < 4);
		
	
	
	system("PAUSE");
    return EXIT_SUCCESS;
}

void libraryMenu()
{
	cout << "================================" << endl
	     << "         Welcome to the" << endl
	     << "          ACME Library" << endl
	     << "================================" << endl;
}
