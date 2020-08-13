//****************************************************
//Author:       Collin Quigley
//Date Created: 8/24/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 HW 2.5
//Title:        JAVA Subtotal and Gratuity
//Description:  Displaying the gratuity and subtotal  
//****************************************************

import java.util.*;

public class Ch2_Homework5
{
   public static void main(String[] args)
   {
     
      //Declaring
      double subtotal, gratuity, subtotalResult, gratuityResult;
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.print("Enter the Subtotal: ");
      subtotal = scan.nextDouble();
      
      System.out.print("Enter the Gratuity Rate Percent: ");
      gratuity = scan.nextDouble() / 100.0;
      // / 100 to change the gratuity to a percent
      
      //Calculating results
      gratuityResult = subtotal * gratuity;
      subtotalResult = gratuityResult + subtotal;
      
      System.out.print("The Gratuity is $" + gratuityResult + " and the total is $" + subtotalResult + "."); 
   }//END MAIN
}//END CLASS