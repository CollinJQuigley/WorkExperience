//****************************************************
//Author:       Collin Quigley
//Date Created: 8/24/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 HW 1.9
//Title:        JAVA Rectangle
//Description:  Displaying the area and perimeter of a rectangle  
//****************************************************

import java.util.*;

public class Chp1_Homework9
{
   public static void main(String[] args)
   {
      //Declaring
      double width = 4.5;
      double height = 7.9;
      double area, perimeter;
      
      //Calculating results
      perimeter = (width * 2) + (height * 2);
      area = (int)((width * perimeter) * 100) / 100.0;
      // * 100 and / 100.0 to bring it down to two decimals
      
      //Outputting data
      System.out.println("A rectangle has the width " + width + " and height " + height + ".");
      System.out.println(" The perimeter is " + perimeter + " and the area is " + area + ".");
      
   }//END MAIN
}//END CLASS