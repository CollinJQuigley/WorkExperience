//****************************************************
//Author:       Collin Quigley
//Date Created: 8/26/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 HW 2.23
//Title:        JAVA Trip Total
//Description:  Calculating the cost of a trip  
//****************************************************

import java.util.*;

public class Ch2_Homework23
{
   public static void main(String[] args)
   {
      
      //Declaring
      double distance, milesGallon, priceGallon, cost;
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.print("Enter the total distance: ");
      distance = scan.nextDouble();
      
      System.out.print("Enter miles per gallon: ");
      milesGallon = scan.nextDouble();
      
      System.out.print("Enter price per gallon: ");
      priceGallon = scan.nextDouble();
      
      //Calculating data
      cost = (int)((distance / milesGallon * priceGallon) * 100) / 100.0;
      // * 100 and / 100.0 to bring it down to two decimals
     
      //Outputting info
      System.out.println("The cost of this trip is $" + cost + ".");
      
   }//END MAIN
}//END CLASS