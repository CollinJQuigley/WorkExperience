//****************************************************
//Author:       Collin Quigley
//Date Created: 10/7/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch4 Homework21
//Title:        Social Security Number
//Description:  Validate a Social Security Number.  
//****************************************************

import java.util.Scanner;

public class Ch4Homework21
{
   public static void main(String[] args)
   {
      
      //Get info
      Scanner scan = new Scanner(System.in);
      System.out.println("Enter a social in the format of DDD-DD-DDDD.");
      String ssn = scan.nextLine();
      
      //Create validation checker
      boolean isValid = false;
      
      //Check length
      if (ssn.length() == 11)
      {
         //Check dash placement
         if ((ssn.charAt(3) == '-') && (ssn.charAt(6) == '-'))
         {
            //Turn into "DDDDDDDDD" for easier checking 
            String replace = ssn.replaceAll("-", "");
            
            //Check digits placement
            for (int i = 0; i < replace.length(); i++)
            {
               if (Character.isDigit(replace.charAt(i)))
               {
                  isValid = true;
               }//End if
               else
               {
                  isValid = false; 
                  break;
               }//End else
               
            }//End for

         }//End second if

      }//End first if           
            
      //Display if valid or not
      if (isValid == true)
         System.out.println(ssn + " is a valid social security number.");
      else
         System.out.println(ssn + " is not a valid social security number.");
   
   }//End main
   
}//End class