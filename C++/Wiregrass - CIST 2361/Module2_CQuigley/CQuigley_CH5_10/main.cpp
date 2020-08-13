//****************************************************
//Author:       Collin Quigley
//Date Created: 2/9/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 HW 5.10
//Title:        Random Number Guessing Game
//Description:  A game where the user guesses a random number  
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    double userGuess = 0;
    int ran = 0;
    bool isValid = false;
    const int MIN = 1, MAX = 100;
    
    //Creating Random
    ran = rand() % 100 + 1;
    
    //Start Menu
    cout << "==========================\n"
         << "    Random Number Game\n"
         << "==========================\n";
    
    //Game
    while (!isValid)
    {
          //Getting info
          cout << "Please enter a number between 1 and 100 as your guess.\n";
          cin  >> userGuess;          
             
          //Comparing Numbers
          if (userGuess > MAX || userGuess < MIN)
          {
               cout << "You have entered an invalid number.\n";
          }
          else if (userGuess > ran)
          {
               cout << "Too high. Try again.\n";
          }
          else if (userGuess < ran)
          {
               cout << "Too low. Try again.\n";
          }
          else
          {
               cout << "Congratulations. You figured out my number.\n\n";
               isValid = true;
          }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
