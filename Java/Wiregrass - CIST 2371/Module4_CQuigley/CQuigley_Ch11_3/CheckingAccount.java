//****************************************************
//Author:       Collin Quigley
//Date Created: 11/2/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.3
//Title:        Bank Class
//Description:  Create a bank class with Deposit and Withdraw  
//****************************************************

class CheckingAccount extends Account
{
   
   //Declaring
   int overdraft = 500;
   
   //Outputting info about Checking
   public String toString()
   {
      return "Checking Account " + "overdraft limit " + overdraft;
   }
   
}//End class