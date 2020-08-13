#ifndef TESTGRADER_H
#define TESTGRADER_H
#include <iostream>
#include <string>

using namespace std;


class TestGrader 
{
	
	private:
		char answers[20];
        char userGuess[20];
		
	public:   
		TestGrader();
		TestGrader(char[]);
		void setKey(char[]);
		string grade(char[]);	

};
#endif
