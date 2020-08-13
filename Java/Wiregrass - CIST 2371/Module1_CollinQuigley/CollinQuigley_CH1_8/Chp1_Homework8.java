//****************************************************
//Author:       Collin Quigley
//Date Created: 8/24/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 HW 1.8
//Title:        JAVA Circle
//Description:  Displaying the area and perimeter of a circle  
//****************************************************

import java.util.*;

public class Chp1_Homework8
{
   public static void main(String[] args)
   {
      //Declaring
      double radius = 5.5;
      final double PI = 3.14159;
      double perimeter, area;
      
      //Calculating results
      perimeter = (int)((2 * radius * PI) * 100) / 100.0;
      area = (int)((radius * radius * PI) * 100) / 100.0;
      // * 100 and / 100.0 to bring it down to two decimals
      
      //Outputting results
      System.out.println(" The radius of a circle is " + radius + ". The perimeter is " + perimeter + " The area is " + area + ".");     
      
   }//END MAIN
}//END CLASS