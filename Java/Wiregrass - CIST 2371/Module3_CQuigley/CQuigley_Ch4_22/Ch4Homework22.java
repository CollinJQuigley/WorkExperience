//****************************************************
//Author:       Collin Quigley
//Date Created: 10/7/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch4 Homework22
//Title:        Substring Checker
//Description:  Checks if String 2 is a substring of String 1  
//****************************************************

import java.util.*;

public class Ch4Homework22
{
   public static void main(String[] args)
   {
      Scanner scan = new Scanner(System.in);
      
      //Getting Strings
      System.out.println("Please enter the main string of letters.");
      String str1 = scan.nextLine();
      
      System.out.println("Please enter a second string of letters to see if it is a substring.");
      String str2 = scan.nextLine();
      
      //Checking if substring
      if (str1.contains(str2))
         System.out.println("The second string is a substring.");
      else
         System.out.println("The second string is not a substring.");         
      
   }//End main
   
}//End class