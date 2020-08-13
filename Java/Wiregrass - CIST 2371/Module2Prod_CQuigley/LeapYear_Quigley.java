//****************************************************
//Author:       Collin Quigley
//Date Created: 12/9/15
//Class:        CIST 2371 - Java I
//Project:      Module 2 Production Exam
//Title:        Leap Year
//Description:  Find which years are Leap Years  
//****************************************************

import java.util.*;

public class  LeapYear_Quigley
{
   public static void main(String[] args)
   {      
      //Display Menu
      System.out.println("==============================");
      System.out.println("*                            *");
      System.out.println("*    ACME YEAR CALCULATOR    *");
      System.out.println("*                            *");
      System.out.println("==============================");
      System.out.println();
      System.out.println("         YEAR  DAYS");
      System.out.println("         ====  ====");
      
      //Display years in order
      for (int year = 2000; year <= 2020; year++)
      {
         System.out.print("         " + year + "  " + daysInYear(year));
         if (isLeapYear(year) == true)
            System.out.print(" **");
         System.out.println();
      }
      
      //Displayed to let user know that ** means Leap Year
      System.out.println();
      System.out.println("** Leap Year");
   }//End main   
     
   public static int daysInYear(int year)
   {
      //Assigns days to year
      if (isLeapYear(year) == true)
         return 366;
      else
         return 365;
   }//End daysInYear
   
   static boolean isLeapYear(int year) 
   {
      return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
   }
      
}//End class