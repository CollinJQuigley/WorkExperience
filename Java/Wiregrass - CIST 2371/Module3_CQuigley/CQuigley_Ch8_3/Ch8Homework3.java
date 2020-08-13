//****************************************************
//Author:       Collin Quigley
//Date Created: 10/13/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch8 Homework3
//Title:        Display Student's Scores
//Description:  Display Student's scores in increasing order
//****************************************************

import java.util.*;

public class Ch8Homework3
{
   public static void main(String[] args)
   {
      //Decalring arrays
      char[][] answers = {
         {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
         {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
         {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
         {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
         {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
         {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
         {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
         {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}};         
      char[] keys = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};      
      int[] studentNum = {1, 2, 3, 4, 5, 6, 7, 8};
      int[] score = new int[8];
      
      //Getting scores
      for (int r = 0; r < answers.length; r++)
      {
         
         //Declaring new counter and making it return to 0 every loop
         int correctCount = 0;
         
         for (int c = 0; c < answers[r].length; c++)
         {
            
            //Counting scores
            if (answers[r][c] == keys[c])
               correctCount++;
               
         }//End second for
         
         //Storing score in array
         score[r] = correctCount;
                  
      }//End first for 
      
      //Orginizing students by scores
      for (int i = 0; i < (studentNum.length - 1); i++)
      {
         
         for (int j = 0; j < (score.length - 1); j++)
         {
           
            if (score[j] > score[j + 1])
            {
               
               //Swapping score
               int extra = score[j];
               score[j] = score[j + 1];
               score[j + 1] = extra;
            
               //Swapping student number
               int extra2 = studentNum[j];
               studentNum[j] = studentNum[j + 1];
               studentNum[j + 1] = extra2;
               
            }//End if
         
         }//End third for
         
      }//End forth for
      
      //Displaying results
      for (int k = 0; k < score.length; k++)
      {
         
         System.out.println(studentNum[k] + "'s score was " + score[k] + ".");
         
      }//End fifth for
            
   }//End main
   
}//End class