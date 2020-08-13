//****************************************************
//Author:       Collin Quigley
//Date Created: 3/7/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 6.5
//Title:        Winning Division
//Description:  Figure out the Division with the highest sales  
//****************************************************

#include <iostream>
#include <string>

using namespace std;

//Prototypes
double getSales(string d);
void findHighest(double one, double two, double three, double four);

int main(int argc, char** argv) {
	
	//Declaring
	string div1 = "Northeast", div2 = "Southeast", div3 = "Northwest", div4 = "Southwest";
	double divQuart1, divQuart2, divQuart3, divQuart4;
	
	//Getting info
	divQuart1 = getSales(div1);
	divQuart2 = getSales(div2);
	divQuart3 = getSales(div3);
	divQuart4 = getSales(div4);
	
	cout << endl;
	
	//Displaying
	findHighest(divQuart1, divQuart2, divQuart3, divQuart4);	
	
	return 0;
}

double getSales(string d)
{
	double sales;
	
	do
	{
		cout << "Please enter " << d << "'s sales for this Quarter: $";
		cin  >> sales;
	}while (sales < 0);
	
	return sales;
}

void findHighest(double one, double two, double three, double four) //I know there is a shorter way to do this, but I cannot remember
{
	if (one > two)
	{
		if (one > three)
		{
			if (one > four)
			{
				cout << "Northeast has the highest sales this Quarter with $" << one << "." << endl;
			}
			else
				cout << "Southwest has the highest sales this Quarter with $" << four << "." << endl;
		}
		else if (three > four)
		{
			cout << "Northwest has the highest sales this Quarter with $" << three << "." << endl;
		}
		else
			cout << "Southwest has the highest sales this Quarter with $" << four << "." << endl;
	}
	else if (two > three)
	{
		if (two > four)
		{
			cout << "Southeast has the highest sales this Quarter with $" << two << "." << endl;
		}
		else
			cout << "Southwest has the highest sales this Quarter with $" << four << "." << endl;
	}
	else if (three > four)
	{
		cout << "Northwest has the highest sales this Quarter with $" << three << "." << endl;
	}
	else
		cout << "Southwest has the highest sales this Quarter with $" << four << "." << endl;
}




