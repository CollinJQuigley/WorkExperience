//****************************************************
//Author:       Collin Quigley
//Date Created: 4/1/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.10
//Title:        Corporate Sales Data
//Description:  Hold and display data for four corporate divisions  
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

//Declaring structure
struct CorpData
{
     string divName;
     int fQuart, sQuart, tQuart, frQuart; //fr = forth
     
     CorpData(string d, double f, double s, double t, double fr)
     {
         divName = d;
         fQuart = f;
         sQuart = s;
         tQuart = t;
		 frQuart = fr;                      
     }         
};

//Prototype
void displayData(CorpData); 

int main(int argc, char *argv[])
{
    
    //Declaring
    CorpData East ("East Division", 1000, 2000 , 3000, 4000);
    CorpData West ("West Division", 4000, 3000, 2000, 1000);
    CorpData North ("North Division", 5000, 6000, 7000, 8000);
    CorpData South ("South Division", 8000, 7000, 6000, 5000);
    
    //Displaying
	displayData(East);
    displayData(West);
    displayData(North);
    displayData(South);
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void displayData(CorpData div)
{
     cout << "\nDivision:        " << div.divName
          << "\nFirst Quarter:   " << div.fQuart  
          << "\nSecond Quarter:  " << div.sQuart
          << "\nThrid Quarter:   " << div.tQuart
          << "\nFourth Quarter:  " << div.frQuart
          << "\n";
}
