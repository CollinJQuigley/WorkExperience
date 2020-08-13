//****************************************************
//Author:       Collin Quigley
//Date Created: 4/19/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 4 Production Exam
//Title:        Test Data
//Description:  Create a 2D array that has different functions using it  
//****************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 3; //global variable

//prototypes
int getTotal(int scores[][SIZE]);
int getAverage(int scores[][SIZE]);
int getRowTotal(int scores[][SIZE], int);
int getColumnTotal(int scores[][SIZE], int);
int getHighestInRow(int scores[][SIZE], int);
int getLowestInRow(int scores[][SIZE], int);

int main(int argc, char *argv[])
{
    
    //Declaring
    int testScores[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int menuOption = 0;
    double var = 0;
    int elmt = 0;
    
    do //To make menu stay up untill user hits 7
    {
         
         do //To make sure user choosing a viable option
         {
              //Menu
              cout << "=========================================" << endl
                   << "           Test Grader Program" << endl
                   << "                   Menu" << endl
                   << "=========================================" << endl
                   << "1. Total of all values." << endl
                   << "2. Average of all values." << endl
                   << "3. Total of each row." << endl
                   << "4. Total of each column." << endl
                   << "5. Highest in selected row." << endl
                   << "6. Lowest in selected row." << endl
                   << "7. Quit." << endl
                   << "Please choose one of the following: ";
              cin  >> menuOption;
              cout << endl;
                   
         }while (menuOption <= 0 && menuOption >=8);
         
         //Going through the options and doing what the user picked
         if (menuOption == 1)
         {
            var = getTotal(testScores);
            cout << "The total of all the values is " << var << "." << endl;
         }
         else if (menuOption == 2)
         {
            var = getAverage(testScores);
            cout << "The average of all the values is " << var << "." << endl;
         }
         else if (menuOption == 3)
            for (int i = 0; i < SIZE; i++)
            {
                 var = getRowTotal(testScores, i);
                 cout << "The total for row " << i << " is " << var << "." << endl;
            }
         else if (menuOption == 4)
            for (int i = 0; i < SIZE; i++)
            {
                 var = getColumnTotal(testScores, i);
                 cout << "The total for column " << i << " is " << var << "." << endl;
            }
         else if (menuOption == 5)
         {
            cout << "Enter a row between from 0, 1, or 2. ";
            cin  >> elmt;
            var = getHighestInRow(testScores, elmt);
            cout << "The highest in row " << elmt << " is " << var << ".";
         }
         else if (menuOption == 6)
         {
            cout << "Enter a row between from 0, 1, or 2. ";
            cin  >> elmt;
            var = getLowestInRow(testScores, elmt);
            cout << "The lowest in row " << elmt << " is " << var << ".";             
         }
            
         cout << endl;        
         
    }while (menuOption != 7);
         
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int getTotal(int scores[][SIZE])
{
     int var;
     
     for (int r = 0; r < SIZE; r++)
         for (int c = 0; c < SIZE; c++)
             var += scores[r][c];
             
     return var;
}// End getTotal()

int getAverage(int scores[][SIZE])
{
     int var, avg;
     
     for (int r = 0; r < SIZE; r++)
         for (int c = 0; c < SIZE; c++)
             var += scores[r][c];
             //Wont get correct value if getTotal() is used
     
     avg = var / (SIZE * SIZE);
     
     return avg;         
}//End getAverage()

int getRowTotal(int scores[][SIZE], int i)
{
     int var;
     
     for (int c = 0; c < SIZE; c++)
         var += scores[i][c];
         
     return var;    
}//End getRowTotal()

int getColumnTotal(int scores[][SIZE], int i)
{
     int var;
     
     for (int r = 0; r < SIZE; r++)
         var += scores[r][i];
         
     return var;    
}//End getColumnTotal()

int getHighestInRow(int scores[][SIZE], int i)
{
     int var;
     
     var = scores [i][0];
     
     for (int c = 1; c < SIZE; c++)     
     {
         if (var < scores[i][c])
         var = scores[i][c];    
     }
     
     return var;  
}//End getHighestInRow()

int getLowestInRow(int scores[][SIZE], int i)
{
     int var;
     
     var = scores [i][0];
     
     for (int c = 1; c < SIZE; c++)     
     {
         if (var > scores[i][c])
         var = scores[i][c];    
     }
     
     return var;  
}//End getLowestInRow()
