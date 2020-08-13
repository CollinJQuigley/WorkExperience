//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch7 Homework12
//Title:        Reverse Number List
//Description:  Reverse list of numbers.  
//****************************************************

import java.util.*;

public class Ch7Homework12
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
      
      //Collecting reversed array from reverse method
      double[] reverse = reverse(values);
      
      //Outputting reversed numbers
      for (int i = 0; i < reverse.length; i++)
      {
         System.out.print(reverse[i] + " ");
      }
   
   }//End main
   
   public static double[] reverse(double[] array)
   {
      //Declaring
      double copy;
      
      //Reversing array
      for (int i = 0; i < array.length / 2; i++)
      {
         copy = array[i];
         array[i] = array[(array.length - 1) - i];
         array[(array.length - 1) - i] = copy;
      }
      
      return array;
        
   }//End reverse

}//End class