// Example of including a user-defined file   GETSTRING.CPP

// Example of reading from a text file for multiple students and writing to a 
// text file.
// The data file looks like this:
//  col  1 - 20     student name     string
//      22 - 24     quiz 1		 int
//      26 - 28     quiz 2           int
//      30 - 32     quiz 3           int
//      34 - 36     quiz 4           int 

#include <iostream>
#include <fstream>
#include <iomanip>
//#include "GetString.cpp"
   // if the GetString file is in the same folder as your program
//or   
#include "g:\courses\cpptools\GetString.cpp"
//NOTE: only a single \ because this is not a C++ statement
using namespace std;

const double QUIZ_WT = 0.40;    // quizzes are 40% of the course grade
const int NUM_QUIZ = 4;         // number of quizzes to be input

int main ()
{
    string name;
    int quiz; 
    int quizSum;
    double quizAvg;
    double quizPts;
    int count;
//  ifstream inFile ("getstring-demo-input.txt");  
           // if data file is in same folder as program
// or 
    ifstream inFile ("g:\\courses\\datafiles\\getstring-demo-input.txt");
    ofstream outFile ("mpython.txt"); 

// check to be sure file is open - fail function returns true if a file operation failed   
    if (inFile.fail())
        cout << "Can't open input file" << endl;
    else cout << "Input file is open" << endl;

    outFile << fixed << showpoint;   // set output options for the output report
    cout << fixed << showpoint;        // set output options for the screen
       
    while (inFile.peek() != EOF)
    {    
         GetString (inFile, name, 20); 
         cout << name << endl;

         outFile << "Grade Summary for " << '*' << name << '*' << endl;
         outFile << setw(64) << "% Avg    Wt   Points" << endl;
         outFile << setw(73) << "------------------------------" << endl;
         outFile << "      ";

         // output the heading for printing the input quiz grades
         for (count = 1; count <= NUM_QUIZ; count++)
              outFile << setw(6) << count;
         outFile << endl << left;
         outFile << "Quizzes:   ";

         // read in the individual quiz grades and calculate their average
         quizSum = 0;
         for (count = 1; count <= NUM_QUIZ; count++)
         {
             inFile >> quiz;
             cout << "quiz " << count << " = " << quiz << endl;  
             outFile << setw(6) << quiz; 
             quizSum += quiz;
         }

// After all the data for a student has been read, use ignore or get to get
// rid of the end-of-line marker; otherwise peek can't stop the loop correctly       
         inFile.ignore(1, '\n');  // or inFile.get();
       
// Calculate average quiz grade
         quizAvg = static_cast<double>(quizSum) / NUM_QUIZ;

// Calculate quiz points
         quizPts = quizAvg * QUIZ_WT;

// Display grade summary
         outFile << "     ";  // start printing at the correct column
         outFile << right << setw(8) << setprecision(1) << quizAvg 
                     << " * " 
                     << setprecision(2) << QUIZ_WT 
                     << " = " 
                     << setprecision(1) << quizPts
                     << " out of " 
                     << static_cast<int>(QUIZ_WT * 100) 
                     << endl << endl << endl << endl;

    }  // end of end-of-file loop

    outFile.close();
// automatically open output file for viewing        
    system("notepad.exe mpython.txt");

    return 0;
}

