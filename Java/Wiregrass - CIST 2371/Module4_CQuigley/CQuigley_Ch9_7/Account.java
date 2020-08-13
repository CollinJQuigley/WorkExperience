//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.7
//Title:        Account Class
//Description:  Create a simple Acount class  
//****************************************************

import java.util.Date;
class Account
{
   
   //Declaring
   private int id;
   private double balance;
   private double annualInterestRate;
   private Date dateCreated;
   
   //No-arg
   Account()
   {
      id = 0;
      balance = 0;
      annualInterestRate = 0;
      dateCreated = new Date();
   }
   
   Account(int ID, double BALANCE)
   {
      id = ID;
      balance = BALANCE;
      dateCreated = new Date();
   }
   
   //Get values
   public int getID() { return id; }   
   public double getBalance() { return balance; }   
   public double getAnnualInterestRate() { return annualInterestRate; }
   
   //Set values
   public void setID(int id) { this.id = id; }   
   public void setBalance(double balance) { this.balance = balance; }   
   public void setAnnualInterestRate (double annualInterestRate)
   {
      this.annualInterestRate = annualInterestRate;
   }
   
   //Get other values
   public Date getDateCreated() { return dateCreated; }   
   public double getMonthlyInterestRate()
   {
      return annualInterestRate / 12.0;
   }
   
   //Actions
   public void withdraw(double amount)
   {
      balance = balance - amount;
   }
   
   public void deposit(double amount)
   {
      balance = balance + amount;
   }
}//End class