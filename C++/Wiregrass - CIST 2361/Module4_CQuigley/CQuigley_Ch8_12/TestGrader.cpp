#include "TestGrader.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

TestGrader::TestGrader() {}

TestGrader::TestGrader(char a[]) 
{
	setKey(a);
}

void TestGrader::setKey(char k[])
{
	for (int i = 0; i < 20; i++)
	    answers[i] = k[i];
}//End setKey()

string TestGrader::grade(char g[])
{
    int right = 0;
    string message = "", wrong = "", correct = "";
    
    for (int i = 0; i < 20; i++)
        if (g[i] == answers[i])
           right++;
        else
        {
            ostringstream con;
            con << i+1;
            wrong += con.str() + ", ";
        }
        
    ostringstream convert;
    convert << correct;
    correct = convert.str();
    
    if(right >= 15)
    {
         message += "\nYou have passed! You got " + correct + " right answers!\n";
         if (wrong != "")
            message += "You got " + wrong + " questions wrong.\n\n";  
    }
    else
    {
         message += "You have failed... You had " + correct + " correct anwsers.\n";
         message += "You had " + wrong + " wrong anwsers.\n\n"; 
    }
    
    return message;               
}//End grade()


