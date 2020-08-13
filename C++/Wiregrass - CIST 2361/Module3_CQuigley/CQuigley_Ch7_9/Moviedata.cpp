//****************************************************
//Author:       Collin Quigley
//Date Created: 3/22/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.9
//Title:        Movie Profit
//Description:  Display info about movies  
//****************************************************

#include "MovieData.h"
#include <iostream>
#include <cstdlib>

using namespace std;

MovieData::MovieData() {}

MovieData::MovieData(string title, string director, string year, int mins, int cost, int revenue)
{
     setTitle(title);
     setDirector(director);
     setYear(year);
     setMins(mins);
     setCost(cost);
     setRevenue(revenue);
}

//Setters/Mutators
void MovieData::setTitle(string t) { title = t; }
void MovieData::setDirector(string d){ director  = d; }
void MovieData::setYear(string y) { year = y; }
void MovieData::setMins(int m) { mins = m; }
void MovieData::setCost(int c) { cost = c; }
void MovieData::setRevenue(int r) { revenue = r; }

//Getters/Accessors
string MovieData::getTitle(){ return title; }
string MovieData::getDirector(){ return director; }
string MovieData::getYear() { return year; }
int MovieData::getMins() { return mins; }
int MovieData::getCost() { return cost; }
int MovieData::getRevenue() { return revenue; }

//Destructor
MovieData::~MovieData()
{
    cout << "\n" << title << " Object destroyed.\n\n";
}
