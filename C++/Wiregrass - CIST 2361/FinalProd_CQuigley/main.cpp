//****************************************************
//Author:       Collin Quigley
//Date Created: 4/24/2016
//Class:        CIST 2361 - Cpp
//Project:      Module FINAL
//Title:        Library System
//Description:  A functional library system
//****************************************************

#include "LibrarySystem.h"
#include <iostream>
#include <istream>
#include <string>

using namespace std;

/** NOTE TO READ!!!! --------------------------------------------------------
I slightly changed the design and options of the library program. I based it
more off of the library I looked at and worked with on base. 
PASSWORDS:----
Librarians have an array for passwords that are shown in the 
LibrarySystem class.
Library Cards also have an array for #s in the LibrartSysten class and can 
have new ones added.
Guest Menu is locked after logging in and can only be logged off with a 
certain password. This allows them to run the program to the public without 
concern of customers getting access to private information. Password is 76309
PROBLEMS:----
The only problem is that for some reason I am unable to get a full line 
of words to input for the book name, even with the getline function. If there
are not any spaces it works though. 
--------------------------------------------------------------------------**/

int main(int argc, char *argv[])
{	
	//Declaring
	int menuOption = 0, loginOption = 0, patronOption = 0, logoff = 0;
	LibrarySystem ACME;
	
	do 
	{    
         ACME.libraryMenu();	
	     do
	     {			
		     cout << "1. Librarian login" << endl
			      << "2. Patrons Login" << endl
			      << "3. Quit" << endl 
			      << "Please select an option: ";			 
		     cin  >> loginOption;
		     cout << endl;
		
		     if (loginOption < 0 || loginOption > 4)
			      cout << "Please enter valid option" << endl;				
	     }while (loginOption < 0 && loginOption > 4);
	      
	     switch(loginOption)
	     {
             case 1:
                  if(loginOption == 1)
                  {
                       ACME.librarianLogin();
                       do
                       {
                            ACME.librarianMenu();
                            cout << "Please select an option: ";
                            do
                            {
                                 cin  >> menuOption;
                                 cout << endl;
                                 if (menuOption < 1 || menuOption > 6)
                                    cout << "Please enter valid option." << endl;
                            }while (menuOption < 1 || menuOption > 6);
                            switch(menuOption)
                            {
                                 case 1:
                                      if (menuOption == 1)
                                         ACME.bookList();
                                      break;                                           
                                 case 2:
                                      if (menuOption == 2)
                                         ACME.bookLookup();
                                      break;        
                                case 3:
                                      if (menuOption == 3)
                                         ACME.bookRestock(); 
                                      break;                                             
                                case 4:
                                     if (menuOption == 4)
                                        ACME.orderBook();
                                     break;              
                                case 5:
                                     if (menuOption == 5)
                                        ACME.addLibraryCard();
                                     break; 
                                case 6:
                                     if (menuOption == 6)
                                        cout << "You have logged off." << endl;
                                     break;               
                            }//End Librarian Menu switch
                       }while (menuOption != 6);
                       break;
                  }//End case 1 if    
             case 2:
                  if(loginOption == 2)
                  {
                       cout << "You are logged in as a Guest." << endl << endl;
                       do
                       {
                            ACME.patronsMenu();
                            cout << "Please select an option: ";
                            do
                            {
                                 cin >> patronOption;
                                 cout << endl;
                                 if (patronOption < 1 || patronOption > 3)
                                      cout << "Please enter valid option." << endl;
                            }while (patronOption < 1 || patronOption > 3);
                            switch(patronOption)
                            {
                                 case 1:
                                      if (patronOption == 1)
                                           ACME.bookLookup();
                                      break;
                                 case 2:
                                      if (patronOption == 2)
                                           ACME.bookCheckout();
                                      break;
                                 case 3:
                                      if (patronOption == 3)
                                      {
                                           logoff = ACME.guestLogoff();
                                           if (logoff != 1)
                                           {
                                              cout << "Incorrect password."
                                                   << endl;
                                           }
                                      }//End case 3
                                      break;
                            }//End Patron switch
                       }while (logoff != 1);
                       break;                       
                  }//End case 2 if     
             case 3:
                  if(loginOption == 3)
                       break;               
         }//Login switch	      
     }while (loginOption != 3);
     
     cout << endl << endl;
	
	 system("PAUSE");
     return EXIT_SUCCESS;
}
