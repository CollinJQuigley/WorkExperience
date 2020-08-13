//****************************************************
//Author:       Collin Quigley
//Date Created: 4/4/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 3 HW 7.16
//Title:        Patient Fees
//Description:  Create and displays patient's bill  
//****************************************************

#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	//Declaring
	int sOption, medOption, medChoice;
    
    do
    {
    	cout << "======================================\n"
    		 << "               ACME Hospital\n"
    		 << "            Patient Bill Creater\n"
    		 << "======================================\n"
    		 << "Please select a surgery between these: \n"
    		 << "1. Brain Surgery \n"
    		 << "2. Heart Surgery \n"
    		 << "3. Leg Surgery \n"
    		 << "4. Arm Surgery \n"
    		 << "5. Chest Surgery \n";
    		 
    	cin  >> sOption;
    	
    	
		
		do
		{
			cout << "Please enter amount of Medications: \n"
			cin  >> medOption;
		} while (medOption < 1 && medOption > 5)
		
		for (int i = 0; i <= medOption; i++)
		{
			cout << "Please select a Medication: \n"
                 << "1. \n"
                 << "2. \n"
                 << "3. \n"
                 << "4. \n"
                 << "5. \n";
            cin  >> medChoice;
            
            
            
		}
		
		
		  
	}while 
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void

