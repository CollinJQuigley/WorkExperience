//****************************************************
//Author:       Collin Quigley
//Date Created: 9/17/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 3.14
//Title:        Heads or Tails
//Description:  User chooses if coin flip is heads or tails  
//****************************************************

import java.util.*;

public class Ch3_Homework14
{
   public static void main(String[] args)
   {
      int userGuess;
      int rand = 0;
      String comGuess;
         
     
      Scanner input = new Scanner(System.in);
      
      rand = (int)(Math.random() * 2);
      
      if(rand == 0)
         comGuess = "Heads";
      else
         comGuess = "Tails";

      System.out.print("Enter 0 for Heads or 1 or Tails: ");
      userGuess = input.nextInt();
      
      if( rand == userGuess)
         System.out.println("You guessed right! The coin landed on " + comGuess + ".");
      else
         System.out.println("You guess wrong. The coin landed on " + comGuess + ".");
      
      //System.out.println(rand);
      
      
   }//END MAIN
}//END CLASS