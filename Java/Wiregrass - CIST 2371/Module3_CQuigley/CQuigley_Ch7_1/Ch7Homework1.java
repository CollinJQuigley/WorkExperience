//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch7 Homework1
//Title:        Score Grades
//Description:  Enter amount of students, scores, and grades them.  
//****************************************************

import java.util.*;

public class Ch7Homework1
{
   public static void main(String[] args)
   {
      
      //Declaring
      int bestScore = 0;      
      
      Scanner scan = new Scanner(System.in);
      
      //Getting how many students
      System.out.print("Enter the number of students: ");
      int students = scan.nextInt();
      
      //Declaring grades array based off size of students
      int[] grades = new int[students];
      
      //Getting students scores
      System.out.println("Enter " + students + " scores: ");
      
      //Calculating best score
      for (int i = 0; i < grades.length; i++)
      {
            grades[i] = scan.nextInt();
            if (grades[i] > bestScore)
               bestScore = grades[i];
      }//End first for          
      
      //Grading students
      for (int j = 0; j < grades.length; j++)
      {
         if (grades[j] >= (bestScore - 10))
            System.out.println("Student " + (j + 1) + " scored A");
         else if (grades[j] >= (bestScore - 20))
            System.out.println("Student " + (j + 1) + " scored B");
         else if (grades[j] >= (bestScore - 30))
            System.out.println("Student " + (j + 1) + " scored C");
         else if (grades[j] >= (bestScore - 40))
            System.out.println("Student " + (j + 1) + " scored D");
         else
            System.out.println("Student " + (j + 1) + " scored F"); 
      }//End second for
      
   }//End main
   
}//End class