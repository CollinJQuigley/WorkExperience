//****************************************************
//Author:       Collin Quigley
//Date Created: 3/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.9
//Title:        Movie Profit
//Description:  Display info about movies  
//****************************************************

#ifndef MOVIEDATA_H
#define MOVIEDATA_H
#include <string>
#include <iostream>

using std::string;

class MovieData
{

    private:
            std::string title, director, year;
            int mins, cost, revenue; 
            
    public:
            MovieData();
            MovieData(string, string, string, int, int, int);
            
            //Setters/Mutators
            void setTitle(string);
            void setDirector(string);
            void setYear(string);
            void setMins(int);
            void setCost(int);
            void setRevenue(int);
            
            //Getters/Accessors
            string getTitle();
            string getDirector();
            string getYear();
            int getMins();
            int getCost();
            int getRevenue();
            
            //Destructor
            ~MovieData();
            
};
#endif
