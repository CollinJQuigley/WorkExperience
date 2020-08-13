//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch7 Homework9
//Title:        Lowest Number
//Description:  Find lowest of ten numbers  
//****************************************************

import java.util.*;

public class Ch7Homework9
{
   public static void main(String[] args)
   {
      
      //Declaring 
      double[] values = new double[10];
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.println("Please enter 10 numbers: ");
      for (int i = 0; i < values.length; i++)
      {
         values[i] = scan.nextDouble();
      }  
      
      System.out.println("The lowest of the ten numbers you entered is " + min(values) + ".");
      
   }//End main
   
   public static double min(double[] array)
   {
      //Declaring
      double min = array[0];
      
      //Finding lowest
      for ( int i = 0; i < array.length; i++)
      {
         if (array[i] < min)
            min = array[i];
      } 
      
      return min;
   
   }//End min

}//End class
