//****************************************************
//Author:       Collin Quigley
//Date Created: 3/7/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW RPS
//Title:        Rock, Paper, & Scissors
//Description:  Play RPS till a player reaches 5 points  
//****************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototypes
void guessRock(int userGuess, int ran, int &userScore, int &compScore);
void guessPaper(int userGuess, int ran, int &userScore, int &compScore);
void guessScissors(int userGuess, int ran, int &userScore, int &compScore);

int main(int argc, char** argv) {
	
	//Declaring
	int userGuess, ran;
	int guess = 0, userScore = 0, compScore = 0;
	
	while (userScore < 5 || compScore < 5) 
	{
		//Creating random
		ran = rand() % 3 + 1;
	
		do
		{	
			//Getting user Guess
			cout << "Enter 1 for Rock, 2 for Paper, or 3 for Scissors: ";
			cin  >> guess;
			if (guess < 1 || guess > 3)
			{
				compScore++;
				cout << "Invalid input. The User's Score is " << userScore 
                     << " and the Computer's Score is " << compScore << "." 
                     << endl;
			}
		}while (guess < 1 && guess > 3);
			
		//Calculating rounds
		if (userGuess == 1)
			guessRock(userGuess, ran, userScore, compScore);
		else if (userGuess == 2)
			guessPaper(userGuess, ran, userScore, compScore);
		else
			guessScissors(userGuess, ran, userScore, compScore);
		
		if (userScore >= 5 || compScore >= 5) //Added this if statement to get while loop to end when scores reach the max
			break;
				
	}
	
	cout << endl;
	
    if (userScore == 5)
		cout << "You win! The end score is you with " << userScore 
             << " and the computer with " << compScore << "." << "\n\n";
	else
		cout << "The computer won! The end score is you with " << userScore 
             << " and the computer with " << compScore << "." << "\n\n";
	
	return 0;
}

void guessRock(int userGuess, int ran, int &userScore, int &compScore)
{
	if (ran == 1)
		cout << "You and the computer Tied\n";
	else if ( ran == 2)
	{
		compScore++;
		cout << "The computer has won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
	else
	{
		userScore++;
		cout << "You have won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
}

void guessPaper(int userGuess, int ran, int &userScore, int &compScore)
{
	if (ran == 1)
	{
		userScore++;
		cout << "You have won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
	else if ( ran == 2)
		cout << "You and the computer Tied\n";
	else
	{
		compScore++;
		cout << "The computer has won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
}

void guessScissors(int userGuess, int ran, int &userScore, int &compScore)
{
	if (ran == 1)
	{
		compScore++;
		cout << "The computer has won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
	
	else if ( ran == 2)
	{
		userScore++;
		cout << "You have won. Your Score is " << userScore 
             << " and the Computer's Score is " << compScore << "." << endl;
	}
		
	else
		cout << "You and the computer Tied\n";
}

