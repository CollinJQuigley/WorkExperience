//****************************************************
//Author:       Collin Quigley
//Date Created: 4/24/2016
//Class:        CIST 2361 - Cpp
//Project:      Module FINAL
//Title:        Library System
//Description:  A functional library system
//****************************************************

#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H
#include <iostream>
#include <istream>
#include <string>

using namespace std;

class LibrarySystem
{
      private:
              
      public:
             //Functions
             void libraryMenu();
             void librarianLogin();
             void librarianMenu();
             void bookList();
             void bookRestock();
             void orderBook();
             void patronsMenu();
             bool checkPassword(int p);
             void bookLookup();
             void addLibraryCard();
             void bookCheckout();
             bool checkCard(int p);
             int guestLogoff();      
};
#endif
