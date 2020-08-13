//****************************************************
//Author:       Collin Quigley
//Date Created: 9/17/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 3.17
//Title:        Scissor, Rock, Paper
//Description:  User plays Rock, Paper, Scissors  
//****************************************************

import java.util.*;

public class Ch3_Homework17
{
   public static void main(String[] args)
   {
      
      int userChoice;
      int rand = 0;
      String choiceName;
      
      Scanner input = new Scanner(System.in);
      
      rand = (int)(Math.random() * 3);
      
      System.out.print("Choose between Scissor (0), Rock (1), and Paper (2).");
      userChoice = input.nextInt();
      
      if (rand == 0)
         choiceName = "Scissor";
      else
         if (rand == 1)
            choiceName = "Rock";
         else
            choiceName = "Paper";
         
      
      while (userChoice == 0)
      {
         if (rand == 0)
            System.out.println("You tied. The computer chose " + choiceName + ".");
         else
            if (rand == 1)
               System.out.println("You loose. The computer chose " + choiceName + ".");
            else
               System.out.println("You win! The computer chose " + choiceName + ".");
         break;
       }//END WHILE FOR 0
       
       while (userChoice == 1)
       {
         if (rand == 0)
            System.out.println("You win! The computer chose " + choiceName + ".");
         else
            if (rand == 1)
               System.out.println("You tied. The computer chose " + choiceName + ".");
            else
               System.out.println("You loose. The computer chose " + choiceName + ".");
       break;
       }//END WHILE FOR 1  
       
       while (userChoice == 2)
       {
         if (rand == 0)
            System.out.println("You loose. The computer chose " + choiceName + ".");
         else
            if (rand == 1)
               System.out.println("You win. The computer chose " + choiceName + ".");
            else
               System.out.println("You tied. The computer chose " + choiceName + ".");
       break;
       }//END WHILE FOR 2
      
   }//END MAIN
}//END CLASS