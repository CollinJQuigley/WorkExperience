//****************************************************
//Author:       Collin Quigley
//Date Created: 9/21/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 5.34
//Title:        Win By Two
//Description:  Play R,P,S but win by two  
//****************************************************

import java.util.*;

public class Ch5_Homework34
{
   public static void main(String[] args)
   {
      
      int userChoice;
      int rand = 0;
      int comWin = 0;
      int userWin = 0;
      String choiceName;
      
      Scanner input = new Scanner(System.in);      
    
      while (userWin != comWin + 2)
      {
        
         if (comWin == userWin + 2)
            break;
         
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
            {
               System.out.println("You tied. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Scissors Tie
            if (rand == 1)
            {
               comWin++;
               System.out.println("You loose. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Scissors Lose
            if (rand == 2)
            {
               userWin++;
               System.out.println("You win! The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Scissors Win
            
            break;
        
         }//End While loop for Scissor guesss
         
         while (userChoice == 1)
         {
            if (rand == 0)
            {
               userWin++;
               System.out.println("You win! The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Rock Win
            
            if (rand == 1)
            {
               System.out.println("You tied. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Rock Tie
            
            if (rand == 2)
            {
               comWin++;
               System.out.println("You loose. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Rock Lose
            
            break;
            
         }//End While for Rock Guess
         
         while (userChoice == 2)
         {
            if (rand == 0)
            {
               comWin++;
               System.out.println("You loose. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Paper Lose
            
            if (rand == 1)
            {
               userWin++;
               System.out.println("You win. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Paper Win
            
            if (rand == 2)
            {
               System.out.println("You tied. The computer chose " + choiceName + ". The score is You: " + userWin + " Computer: " + comWin + ".");
            }//End If for Paper Tie
            
            break;
            
         }//End While for Paper Guess
                     
      }//End While for game
           
      System.out.println("Game Over. The score is User " + userWin + " and Computer " + comWin + ".");
   
   }//END MAIN

}//END CLASS