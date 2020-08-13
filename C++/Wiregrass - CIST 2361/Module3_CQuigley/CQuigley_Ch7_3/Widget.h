//****************************************************
//Author:       Collin Quigley
//Date Created: 3/13/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.3
//Title:        Widget Factory
//Description:  Display days it takes to make a certain amount of widgets  
//****************************************************

#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>

class Widget
{
	private:
            int widgets, widgetDaily;
            
 
    public:
           
           double days;
           
           Widget();
           Widget(int, int);
           
           void setWidgets(int);
           void setDaily(int);
           
           int getWidgets();
           int getDaily();
           int getDays();
           
};
#endif
