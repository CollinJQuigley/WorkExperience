#include <cstdlib>
#include <iostream>
#include "TestGrader.h"

using namespace std;

TestGrader user;

//Prototypes
void getAnswers();

int main(int argc, char *argv[])
{
    
    //Declaring
    char t[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    
    user.setKey(t);
    
    getAnswers();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void getAnswers()
{
     
     //Declaring
     char answer = 'E'; 
     char userGuesses[20];
     
     //Menu
     cout << "========================================\n"
          << "              AMCE TEST GRADER\n"
          << "========================================\n"
          << "Please enter your answers.\n"
          << "P.S. All answers must be capital letters\n\n";          

     for (int i = 0; i < 20; i++)
     {
          while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D')
          {
               cout << "Enter an answer for question " << (i+1) << " between A, B, C, or D:";
               cin  >> answer; 
          }
          
          userGuesses[i] = answer;
          answer = 'E';
     }
     
     cout << user.grade(userGuesses);          
}//End getAnswers()
