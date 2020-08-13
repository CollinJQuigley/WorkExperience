//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.7
//Title:        Account Class
//Description:  Create a simple Acount class  
//****************************************************

import java.util.Date;

class AccountTest
{
   
   public static void main(String[] args)
   {
      
      //Declaring
      Account account = new Account(1122,20000);
      account.setAnnualInterestRate(4.5);
      account.withdraw(2500);
      account.deposit(3000);
      
      //Outputting info
      System.out.println("Balance:           "  + account.getBalance());
      System.out.println("Monthly interest:  " + account.getMonthlyInterestRate());
      System.out.println("Date created:      " + account.getDateCreated().toString());
   
   }//End main

}//End class