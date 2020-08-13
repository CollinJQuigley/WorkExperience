//****************************************************
//Author:       Collin Quigley
//Date Created: 11/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 Production Exam
//Title:        Account Class
//Description:  Create an Account class with working menu  
//****************************************************

import java.util.*;

class Account
{
   
   //Declaring
   private int id = 0;
   private double balance = 0;
   private double annualInterstRate = 4.5;
   private Date dateCreated;      
   
   Account () 
   {
      id = 1;
      balance = 1000;
      //dateCreated = java.Date;
   }//End no-Arg
   
   Account (int id, double balance)
   {
      setID(id);
      setBalance(balance);
   }
   
   
   //Accessors 
   public int getID() { return id; }
   public double getBalance() { return balance; }
   
   //Mutators
   public void setID (int id) { this.id = id; }
   public void setBalance (double balance) { this.balance = balance; }
   
   //public void setDate() { }
   
   public double withdraw (double withdraw)
   {
      balance = (balance - withdraw);
      return balance;
   }
   
   public double deposit (double deposit)
   {
      balance = (balance + deposit);
      return balance;
   }
   
   public void customerInfo()
   {
      System.out.println("\nAccount ID: " + getID() + "\nBalance: $" + getBalance());
   }
}//End Account