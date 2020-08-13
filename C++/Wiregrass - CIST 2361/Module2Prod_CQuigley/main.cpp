//****************************************************
//Author:       Collin Quigley
//Date Created: 2/25/2016
//Class:        CIST 2361 - Cpp
//Project:      Module 2 Production Exam
//Title:        ACME Copper Wire Company
//Description:  Get information about spools orders/stock and display  
//****************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    //Declaring
    double spoolsStock, spoolsOrdered, specialShip, specialShipTotal;
    double regularShipTotal, spoolsBack, spoolsAbleShip, spoolsTotal;
    double cost = 100, regularShip = 10;
    
    //Getting info    
    cout << "====================================\n"
         << "      ACME Copper Wire Company\n"
         << "====================================\n\n";
    
    do
    {
         cout << "Please enter the amount of spools ordered:  ";
         cin  >> spoolsOrdered;
    }while (spoolsOrdered <= 0);
    
    do
    {
         cout << "Please enter the amount of spools in stock: ";
         cin  >> spoolsStock;
    }while (spoolsStock < 0);
    
    do
    {
         cout << "Please enter any special shipping charges, if not enter 0: ";
         cin  >> specialShip;
    }while (specialShip < 0);
    
    //Displaying
     cout << "====================================\n"
          << "      ACME Copper Wire Company\n"
          << "        Status of your Order\n"
          << "====================================\n\n";
     
     if (spoolsStock < spoolsOrdered) //Order sheet if backorders
     {
        
        //Calculating
        spoolsBack = spoolsOrdered - spoolsStock;
        spoolsAbleShip = spoolsOrdered - spoolsBack;
        spoolsTotal = spoolsAbleShip * cost;
        
        cout << "Spools ready to Ship: " << spoolsAbleShip << endl;
        
        cout << "Spools on Backorder:  " << spoolsBack << endl;        
        
        cout << "Subtotal of Shipment: " << spoolsTotal << endl;
        
        if (specialShip != 0)
        {
           specialShipTotal = specialShip * spoolsAbleShip;
           cout << "Subtotal of Shipping: " << specialShipTotal << endl;
           
           cout << "Subtotal of Order:    " << (specialShipTotal + spoolsTotal)
                << endl;
        }//End Shipping if
        else
        {
           regularShipTotal = regularShip * spoolsAbleShip;
           cout << "Subtotal of Shipping: " << regularShipTotal << endl;
           
           cout << "Subtotal of Order:    " << (regularShipTotal + spoolsTotal)
                << endl;
        }//End Shipping else
        
     }//End backorder if
     else //Order sheet if no backorders
     {
         //Calculating
         spoolsTotal = spoolsOrdered * cost;
         
         cout << "Spools ready to Ship: " << spoolsOrdered << endl;
         
         cout << "Subtotal of Shipment: " << spoolsTotal << endl;
         
         if (specialShip != 0)
        {
           specialShipTotal = specialShip * spoolsOrdered;
           cout << "Subtotal of Shipping: " << specialShipTotal << endl;
           
           cout << "Subtotal of Order:    " << (specialShipTotal + spoolsTotal)
                << endl;
        }//End Shipping if
        else
        {
           regularShipTotal = regularShip * spoolsOrdered;
           cout << "Subtotal of Shipping: " << regularShipTotal << endl;
           
           cout << "Subtotal of Order:    " << (regularShipTotal + spoolsTotal)
                << endl;
        }//End Shipping else
             
     }//End backorder else      
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
