//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch7 Homework17
//Title:        Name and Scores in order
//Description:  Display students name and score in order.  
//****************************************************

import java.util.*;

public class Ch7Homework17
{
   public static void main(String[] args)
   {
      
      Scanner scan = new Scanner(System.in);
      
      //Getting number of students
      System.out.println("Please enter number of students");
      int students = scan.nextInt();      
      
      //Declaring arrays based off the size of students
      String[] names = new String[students];
      double[] scores = new double[students];
      
      //Getting info
      for (int i = 0; i < students; i++)
      {
         System.out.println("Please enter student's name: ");
         names[i] = scan.next();
         
         System.out.println("Enter " + names[i] + "'s score: ");
         scores[i] = scan.nextDouble();
      }
      
      //Giving info
      orginizeStudents(names, scores, students);
      
   }//End main
   
   public static void orginizeStudents(String[] names1, double[] scores1, int students1)
   {
      
      //Orginizing students by score in decreasing order
      for (int i = 0; i < students1; i++)
      {
         for (int j = 0; j < (students1 - 1); j++)
         {
            if (scores1[j] < scores1[j + 1])
            {
               double sCopy = scores1[j];
               scores1[j] = scores1[j + 1];
               scores1[j + 1] = sCopy;
               
               String nCopy = names1[j];
               names1[j] = names1[j + 1];
               names1[j + 1] = nCopy;
            }//End if  
         }//End nested for
      }//End first for
      
      for (int i = 0; i < students1; i++)
      {
         System.out.println(names1[i] + "'s score is " + scores1[i] + ".");      
      }//End second for
  
   }//End orginizingStudents

}//End class