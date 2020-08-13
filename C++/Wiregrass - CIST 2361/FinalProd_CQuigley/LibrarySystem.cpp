//****************************************************
//Author:       Collin Quigley
//Date Created: 4/24/2016
//Class:        CIST 2361 - Cpp
//Project:      Module FINAL
//Title:        Library System
//Description:  A functional library system
//****************************************************

#include "LibrarySystem.h"
#include <cstdlib>
#include <iostream>
#include <istream>

using namespace std;

//Global Variables
const int SIZE = 20, employees = 6;
string books[SIZE] = {"Harry Potter and the Sorcerer's Stone", "Harry Potter and the Chamber of Secrets",
                      "Harry Potter and the Prisoner of Azkaban", "Harry Potter and the Goblet of Fire",
                      "Harry Potter and the Order of the Phoenix", "Harry Potter and the Half-Blood Prince",
                      "Harry Potter and the Deathly Hollows", "Percy Jackson: Lightning Theif",
                      "Percy Jackson: The Sea of Monsters", "Percy Jackson: The Titan's Curse", 
                      "Percy Jackson: The Battle of the Labyrinth", "Percy Jackson: The Last Olympain"};
int stock[SIZE] = {2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1};
int passwords[employees] = {1234, 4321, 5678, 8765, 1029, 3847};
int libraryCards[SIZE] = {123456, 654321, 567890, 246810, 135791}; 
bool isValid = false;
int var, varTwo; //var & varTwo helpers

void LibrarySystem::libraryMenu()
{
	cout << "================================" << endl
	     << "         Welcome to the" << endl
	     << "          ACME Library" << endl
	     << "================================" << endl << endl;
}//End libraryMenu

void LibrarySystem::librarianLogin()
{
     int password;
     
     do
     {
          cout << "================================" << endl
               << "        Librarian Log-in    " << endl
               << "================================" << endl
               << "Please enter 4 digit password." << endl
               << "Password: "; 
          cin  >> password;
          
          cout << endl;
          
          isValid = checkPassword(password);
          
          if (isValid != true)
             cout << "Incorrect Password. Try again." << endl << endl;
             
     }while (isValid == false);
        
}//End libraryLogin()

void LibrarySystem::librarianMenu()
{

     cout << "================================" << endl
          << "         Librarian Menu" << endl
          << "================================" << endl
          << "1. Book List" << endl
          << "2. Lookup book" << endl
          << "3. Restock books" << endl
          << "4. Order new book(s)" << endl
          << "5. Add new Library Card" << endl
          << "6. Quit" << endl;          
     
}//End librarinMenu()

void LibrarySystem::bookList()
{
     for (int b = 0; b < SIZE; b++)
     {
         if (books[b] == "")
         break;
                                              
         cout << "Book " << b+1 << " " 
         << books[b] << endl;
     }//End for     
                                        
     cout << endl;
}//EndbookList

void LibrarySystem::bookRestock()
{
     cout << "Please enter book #: ";
     cin  >> var;
     cout << "Enter number of book(s) to add to stock for " << endl
          << books[var-1] << ": ";
     cin  >> varTwo;
     stock[var-1] += varTwo;
     cout << books[var-1] << "'s stock is now "
          << stock[var-1] << "." << endl << endl;
}//End bookRestock()

void LibrarySystem::orderBook()
{
     for (int i = 0; i < SIZE; i++)
     {
         if (i == 20 && books[i] != "")
         {
            cout << "There is no more space."
                 << "Please try again later." << endl;
         }
                                                
         if (books[i] == "")
         {
            cout << "Please enter book name: ";
            cin  >> books[i];
            //.getline; will not work to get full line input
            cout << "Please enter stock for "
                 << books[i] << ": ";
            cin  >> stock [i];
            cout << endl;
            break;   
         }//End if                                                
     }//End for 
}//End orderBook()

void LibrarySystem::patronsMenu()
{
     cout << "================================" << endl
          << "          Library Menu" << endl
          << "================================" << endl
          << "1. Lookup book" << endl
          << "2. Checkout book" << endl
          << "3. Quit" << endl;     
}//End patronsMenu()

bool LibrarySystem::checkPassword(int p)
{
     isValid = false;
     bool checker = false;
     
     for (int i = 0; i < employees; i++)
     {
          if (passwords[i] == p)
             checker = true;    
     }
     
     /**
     if(p >= 1000 && p <= 9999)
          checker = true;
     else
         checker = false;
     **/ //Was original idea for checking passwords before array
         
     return checker;
}//End checkPassword()

void LibrarySystem::bookLookup()
{
     do
     {
         cout << "Please enter book #: ";
         cin  >> var;
         
         if (var < 0 || var >= SIZE)
            cout << "Invalid book #." << endl;
     }while (var < 0 || var > SIZE);  
     
     cout << "Book " << var << " " << books[var-1] << endl << endl;      
}//End bookLookup()

void LibrarySystem::addLibraryCard()
{
     int id;
     
     do
     {
         isValid = true;
         cout << "Please enter new Library Card #: ";
         cin  >> id;
         
         if (id < 100000 || id > 999999)
         {
            cout << "Invalid Library Card #. Please try again." << endl;
            isValid = false;
         }
         
         for (int i = 0; i < SIZE; i++)
         {  
            if (libraryCards[i] == id)
            {
               isValid = false;
               cout << "Library Card # is already being used." << endl;
            }
            
            if (i == (SIZE - 1) && libraryCards[i] != 0)
            {
               isValid = false;
               cout << "Library Cards are full at the moment."
                       "Sorry, please try again later." << endl;
            }               
         }
     }while (isValid != true);
         
     /**
     do
     {
         if (id < 100000 && id > 999999)
            cout << "Invalid Library Card #. Please try again." << endl;
         
         for (int i = 0; i < SIZE; i++)
         {
            if (libraryCards[i] == id)
            {
               isValid = false;
               cout << "Library Card # is already being used." << endl;
               break;
            }    
         }
     }while(id < 100000 && id > 999999 && isValid == true); 
     
     for (int i = 0; i < SIZE; i++)
     {
          if (i == (SIZE - 1) && libraryCards[i] != 0)
               cout << "Library Cards are full at the moment."
                       "Sorry, please try again later." << endl;
          
          if (libraryCards[i] == 0)
               libraryCards[i] = id;               
     }
     **/ //Was the original library card checker
}//End addLibraryCard()

void LibrarySystem::bookCheckout()
{
     isValid = false;
     
     do
     {
         cout << "Please enter book #: ";
         cin  >> var;
         
         if (var < 0 || var >= SIZE)
            cout << "Invalid book #." << endl;
     }while (var < 0 || var > SIZE);
     if (books[var-1] != "")
        if (stock[var-1] > 0)
        {             
             cout << books[var-1] << " is available. " << endl
                  << "Please enter 6 digit library card."
                  << endl; 
             do
             {                   
                  cout << "Library Card #: ";
                  cin  >> varTwo;
             
                  isValid = checkCard(varTwo);
             
                  if (isValid != true)
                     cout << "Please enter valid Library Card #." << endl;                  
             }while (isValid != true);
             
             stock[var-1] -= 1;
             cout << "You have successfully checked out " << books[var-1] << "."
                  << endl << endl;             
        }
        else //End stock if
             cout << books[var-1] << " is out of stock." << endl << endl;
     else //End books if
         cout << "There is not a book with # " << var << "." << endl << endl;
}//End bookCheckout()

bool LibrarySystem::checkCard(int p)
{
     isValid = false;
     bool checker = false;
     
     for (int i = 0; i < SIZE; i++)
     {
          if (libraryCards[i] == p)
               checker = true;
     }     
     
     /**
     if(p >= 100000 && p <= 999999)
          checker = true;
     else
         checker = false;
     **/ //Was used before Library Cards array was made
         
     return checker;
}//End checkCard()

int LibrarySystem::guestLogoff()
{
     int yOrN = 0, password; //yes or no int variable
     
     cout << "To logoff Guest Menu, Please enter secure password: ";
     cin  >> password;
     
     if (password == 76309)
        yOrN = 1;
        
     return yOrN;    
}//End guestLogoff()
