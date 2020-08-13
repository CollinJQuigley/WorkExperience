//****************************************************
//Author:       Collin Quigley
//Date Created: 11/2/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.3
//Title:        Bank Class
//Description:  Create a bank class with Deposit and Withdraw  
//****************************************************

public class TestAccount
{
   
   public static void main(String[] args)
   {
      
      //Sending info
      Account account1 = new Account(1001, 10000, 2.9);
      Account account2 = new SavingsAccount();
      Account account3 = new CheckingAccount();
      
      //Deposit 
      account1.deposit(5000);
      
      //Withdraw
      account1.withdraw(4500);
      
      //Outputting results
      System.out.println("Account ID: " + account1.getID());
      System.out.println("Balance: " + account1.getBalance());
      System.out.println("Monthly interest rate: " + account1.getMonthlyInterestRate());
      System.out.println("Date created: " + account1.getdate());
      System.out.println(account2.toString());
      System.out.println(account3.toString());
      
   }//End main
   
}//End class