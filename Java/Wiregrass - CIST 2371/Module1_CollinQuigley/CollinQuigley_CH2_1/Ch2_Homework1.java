//****************************************************
//Author:       Collin Quigley
//Date Created: 8/24/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 HW 2.1
//Title:        JAVA Converter
//Description:  Changing the degree of Celsius to Fahrenheit  
//****************************************************

import java.util.*;

public class Ch2_Homework1
{
   public static void main(String[] args)
   {
      //Declaring
      double fahrenheit, celsius;
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.print("Please enter a Celsius Degree to be converted: ");
      celsius = scan.nextDouble();
      
      //Calculating 
      fahrenheit = (9.0/5) * celsius + 32;
      
      //Displaying results
      System.out.println( + celsius + " Celsius is " + fahrenheit + " Fahrenheit.");
      
   }//END MAIN
}//END CLASS