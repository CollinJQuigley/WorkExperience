//****************************************************
//Author:       Collin Quigley
//Date Created: 9/17/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 5.40
//Title:        Flip a coin X
//Description:  Flip a coin 1 million times  
//****************************************************

import java.util.*;

public class Ch5Homework40
{
   public static void main(String[] args)
   {
      int heads = 0;
      int tails = 0;
      int rand = 0;
      final int MAX = 1000000;
      
      for (int i = 0; i <= MAX; i++)
      {
         rand = (int)(Math.random() * 2);
         if (rand == 0)
         {
            heads++;
         }//End if heads
         
         if (rand == 1)
         {
            tails++;
         }//End if tails
      
      }//End for
      
      System.out.println("After 1 million coin flips there are " + heads + " heads and " + tails + " tails.");
      
   }//End main
}//End class