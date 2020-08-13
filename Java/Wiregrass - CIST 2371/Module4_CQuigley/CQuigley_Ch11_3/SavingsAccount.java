//****************************************************
//Author:       Collin Quigley
//Date Created: 11/2/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.3
//Title:        Bank Class
//Description:  Create a bank class with Deposit and Withdraw  
//****************************************************

class SavingsAccount extends Account
{
   
   //Declaring
   int overdraft = 0;
  
  //Outputting info about Savings
   public String toString()
   {
      return "Savings Account " + "overdraft limit " + overdraft;
   }
   
}//End class