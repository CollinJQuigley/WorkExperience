//****************************************************
//Author:       Collin Quigley
//Date Created: 9/23/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 6.5
//Title:        Increasing order
//Description:  Displays numbers in increasing order  
//****************************************************

import java.util.*;

public class Ch6Homework5
{
   public static void main(String[] args)
   {
      double firstNum, secNum, thirdNum;      
            
      Scanner input = new Scanner(System.in);
      
      System.out.print("Please enter the first number: ");
      firstNum = input.nextDouble();
      
      System.out.print("Please enter the second number: ");
      secNum = input.nextDouble();
      
      System.out.print("Please enter the third number: ");
      thirdNum = input.nextDouble();     
   
      System.out.println("The numbers in increasing order are ");
      System.out.println(increasingNumbers(firstNum, secNum, thirdNum));
         
   }//End main 
   
   public static double increasingNumbers(double num1, double num2, double num3)
   {
      double extra = 0;
      
      if (num1 > num2)
      {
         extra = num2;
         num2 = num1;
         num1 = extra;
      }//End if num1 > num2
      
      if (num2 > num3)
      {
         extra = num3;
         num3 = num2;
         num2 = extra;
      }//End if num2 > num3
      
      if (num2 < num1)
      {
         extra = num1;
         num1 = num2;
         num2 = extra;         
      }//End if num2 < num1
      
   return num1, num2, num3;
   }//End increasingNumbers
      
}//End class