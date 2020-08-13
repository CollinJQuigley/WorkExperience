//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.4
//Title:        Random Class
//Description:  Create a Random class  
//****************************************************

import java.util.Random;

public class RandomClass
{
   
   public static void main(String[] args)
   {
      
      //Creating random number(s)
      Random random = new Random(1000);
      
      //Outputting Random numbers
      System.out.println("The first 50 random numbers generated between (0 - 100) are: ");      
      for (int i = 0; i < 50; i++)
      {
         System.out.println(" " + random.nextInt(100));
      }
   
   }//End main

}//End class