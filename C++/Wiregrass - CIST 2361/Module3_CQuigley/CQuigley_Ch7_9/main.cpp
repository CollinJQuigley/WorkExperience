//****************************************************
//Author:       Collin Quigley
//Date Created: 3/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.9
//Title:        Movie Profit
//Description:  Display info about movies  
//****************************************************

#include <cstdlib>
#include <iostream>
#include "MovieData.h"

using namespace std;

//prototypes
void displayMovie(MovieData);

int main(int argc, char *argv[])
{
    //declaring
    MovieData A("Avengers", "Joss Whedon", "2012", 143, 220000000, 1520000000);
    MovieData kfp("Kung Fu Panda", "Mark Osborne", "2008", 95, 130000000, 631700000);
    
    //displaying
	displayMovie(A);
    displayMovie(kfp);  
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void displayMovie(MovieData movie)
{
     cout << "\nMovie Title:          " << movie.getTitle()
          << "\nMovie Director:       " << movie.getDirector()
          << "\nMovie Year:           " << movie.getYear()
          << "\nMovie Length (mins):  " << movie.getMins() << " Minutes"
          << "\nMovie Cost:          $" << movie.getCost()
          << "\nMovie Revenue:       $" << movie.getRevenue()
		  << endl;
}
