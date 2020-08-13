//****************************************************
//Author:       Collin Quigley
//Date Created: 11/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 Production Exam
//Title:        Account Class
//Description:  Create an Account class with working menu  
//****************************************************

import java.util.*;
import java.util.Random;

public class TestAccount
{
     
   public static void main(String[] args)
   {
      
      //Declaring
      Account[] acnt = new Account[10];
      double[] ranBalance = new double[10];
      int choice = 0;
      int id = 0;
      double withdraw = 0;
      double deposit = 0;
      Random ran = new Random(1000);      
      
      //Creating scanner
      Scanner scan = new Scanner(System.in);
      
      //Generating random balances
      for (int i = 0; i < 10; i++)
      {
         ranBalance[i] = ran.nextInt(1000);
      }//End if      
      
      for (int i = 0; i < acnt.length; i++)
      {
         acnt[i] = new Account (i, ranBalance[i]);
      }
      
      //Meun and ID checker
      while (choice != 99)
      {
         
         System.out.print("\nPlease enter an ID number: ");
         id = scan.nextInt();
         
         if (id < 0 && id > 10)
         {         
            System.out.println("Invalid ID.");            
         }//End if
          
         else
         {     
           //Second while to allow user to keep entering info
           while (choice != 99)
           {
            //Menu
            System.out.println("\nACME BANKING SYSTEM");
            System.out.println("===================");
            System.out.println("1: Check Balance");
            System.out.println("2: Withdraw");
            System.out.println("3: Deposit");
            System.out.println("4: Display Customer Info");
            System.out.println("5: Change User");
            System.out.println("99: Exit");
            System.out.print("\n\nEnter Choice: ");
            choice = scan.nextInt();
         
            //Choices
            if (choice == 1)
            {
               System.out.println("The Balance is $" + acnt[id].getBalance());
            }
            
            if (choice == 2)
            {
               System.out.print("Enter amount to withdraw: ");
               withdraw = scan.nextDouble();
               System.out.print("The new balance is $" + acnt[id].withdraw(withdraw));
            }
         
            if (choice == 3)
            {
               System.out.print("Enter amount to deposit: ");
               deposit = scan.nextDouble();
               System.out.print("The new balance is $" + acnt[id].deposit(deposit));
            }
            
            if (choice == 4)
            {
               acnt[id].customerInfo();
            }
            
            if (choice == 5)
            {
               break;
            }
            
            }//End while
                 
         }//End else
                        
      }//End while      
      
   }//End main
     
}//End TestAccount