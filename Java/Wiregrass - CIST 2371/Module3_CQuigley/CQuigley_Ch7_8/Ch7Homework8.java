//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch7 Homework8
//Title:        Average
//Description:  Find average of ten numbers  
//****************************************************

import java.util.*;

public class Ch7Homework8
{
   public static void main(String[] args)
   {
      
      //Declaring
      double[] values = new double[10];
      Scanner scan = new Scanner(System.in);
      
      //Getting numbers
      System.out.println("Please enter 10 numbers: ");
      for (int i = 0; i < values.length; i++)
      {
         values[i] = scan.nextDouble();
      }  
      
      System.out.println("The average of the 10 numbers you entered is: " + average(values));
   }//End main
   
   public static int average(int[] array)
   {
      
      //Declaring
      int average = 0;
      int sum = 0;
      
      //Find average
      for (int i = 0; i < array.length; i++)
      {
         sum += array[i];
      } 
      
      average = (sum / 10);
      
      return average;
   
   }//Average int version
   
   public static double average(double[] array)
   {
      
      //Declaring
      double average = 0;
      double sum = 0;
      
      //Find average
      for (int i = 0; i < array.length; i++)
      {
         sum += array[i];
      } 
      
      average = (sum / 10.0);
      
      return average;
  
   }//Average double version
   
}//End class