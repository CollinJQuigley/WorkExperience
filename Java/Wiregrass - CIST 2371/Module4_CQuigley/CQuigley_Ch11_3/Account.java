//****************************************************
//Author:       Collin Quigley
//Date Created: 11/2/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.3
//Title:        Bank Class
//Description:  Create a bank class with Deposit and Withdraw  
//****************************************************

class Account
{
   
   //Declaring
   private int number = 00001;
   private double balance;
   private double annualInterestRate;   
   private java.util.Date dateCreated = new java.util.Date();
   
   //No-arg
   public Account()
   {
      java.util.Date dateCreated = new java.util.Date();
   }
   
   public Account (int id, double bal, double AIRate)
   {
      number = id;
      balance = bal;
      annualInterestRate = AIRate;
   }
   
   //Set date
   public void setdate(java.util.Date dateCreated) { this.dateCreated = dateCreated; }
   
   //Get data
   public java.util.Date getdate() { return dateCreated; }   
   public int getID() { return number; }   
   public double getBalance() { return balance; }
   
   //Deposit and withdraw
   public double deposit (double deposit)
   {
      balance += deposit;
      return (deposit);      
   }   
   public double withdraw (double withdraw)
   {
      this.balance -= withdraw;
      return (withdraw);
   }
   
   //Set and get Annual Interst Rate
   public double getAnnualInterestRate() { return annualInterestRate; }   
   public void setAnnualInterestRate (double annualInterestrate) { this.annualInterestRate = annualInterestRate; }
   
   //Get Monthly Interest Rate
   public double getMonthlyInterestRate()
   {
      double monthlyInterest = (annualInterestRate / 1200) * balance;
      return monthlyInterest;
   }
   
}//End class