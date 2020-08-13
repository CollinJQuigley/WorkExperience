//****************************************************
//Author:       Collin Quigley
//Date Created: 9/23/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 6.3
//Title:        Flip a number
//Description:  Flip a number and check it  
//****************************************************

import java.util.*;

public class Ch6Homework3
{
   public static void main(String[] args)
   {
      
      int number;
      int reverse = 0;
      
      Scanner input = new Scanner(System.in);
      
      System.out.print("Please enter a number to test if it is a Palindrome: ");
      number = input.nextInt();      
      
      while (number != 0)
      {
         reverse += number % 10;
         number = number / 10;
         reverse = reverse * 10;
      }//End While
      
      reverse = reverse / 10;
      System.out.println("The reverse number is " + reverse + ".");
    
   }//End main  

}//End class