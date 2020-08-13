//****************************************************
//Author:       Collin Quigley
//Date Created: 4/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 4 HW 8.Soda Machine
//Title:        Soda Machine
//Description:  Create a working soda machine  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <string>
#include "SodaMachine.h"

using namespace std;

//Prototypes
std::string displayOption();
int buyDrink(int);

int main(int argc, char *argv[])
{
    
    //Declaring
    int menuOption = 0; 
    string menu = displayOption();
    
    //Menu
    do
    {
          do
          {
               cout << menu;
               //displayChoices(); //Would not work and display string
               cin  >> menuOption;
               if (menuOption < 0 && menuOption > 6)
                  cout << "Please choose valid option.\n\n";
          }while (menuOption < 0 && menuOption > 6);         
             
          if (menuOption > 0 && menuOption < 6)
               buyDrink(menuOption);
             
    }while (menuOption != 6);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
