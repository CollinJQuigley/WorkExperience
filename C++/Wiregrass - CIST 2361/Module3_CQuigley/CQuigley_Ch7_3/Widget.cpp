//****************************************************
//Author:       Collin Quigley
//Date Created: 3/13/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.3
//Title:        Widget Factory
//Description:  Display days it takes to make a certain amount of widgets  
//****************************************************

#include "Widget.h"
#include <iostream>


using namespace std;

Widget::Widget() {}

Widget::Widget(int widgets, int widgetDaily)
{
     setWidgets(widgets);
     setDaily(widgetDaily);
}

//Setters/Mutators
void Widget::setWidgets(int w) { widgets = w; }
void Widget::setDaily(int d) { widgetDaily = d; }
           
//Getters/Accessors
int Widget::getWidgets(){ return widgets; }
int Widget::getDaily() { return widgetDaily; }
int Widget::getDays()
{
    days = widgets / widgetDaily;
    return days;
}
