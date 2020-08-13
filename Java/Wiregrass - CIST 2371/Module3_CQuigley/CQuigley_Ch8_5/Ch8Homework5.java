//****************************************************
//Author:       Collin Quigley
//Date Created: 10/13/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch8 Homework5
//Title:        Add Matrices
//Description:  Add two matrices together.  
//****************************************************

import java.util.*;

public class Ch8Homework5
{
   public static void main(String[] args)
   {
      
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.println("Please enter the number of rows for matrix 1.");
      int row1 = scan.nextInt();
      
      System.out.println("Please enter the number of columns for matrix 1.");
      int col1 = scan.nextInt();
      
      System.out.println("Please enter the number of rows for matrix 2.");
      int row2 = scan.nextInt();
      
      System.out.println("Please enter the number of columns for matrix 2.");      
      int col2 = scan.nextInt();
      
      //Declaring arrays
      double[][] matrix1 = new double[row1][col1];
      double[][] matrix2 = new double[row2][col2];
      
      //Filling arrays
      for (int r1 = 0; r1 < matrix1.length; r1++)
      {
         
         for (int c1 = 0; c1 < matrix1[r1].length; c1++)
         {
           
            //Getting matrix1 info
            System.out.println("Enter a double into matrix 1.");
            matrix1[r1][c1] = scan.nextDouble();
            
         }//End nested for
         
      }//End for
      
      for (int r2 = 0; r2 < matrix2.length; r2++)
      {
         
         for (int c2 = 0; c2 < matrix2[r2].length; c2++)
         {
            
            //Getting matrix2 info
            System.out.println("Enter a double into matrix 2.");
            matrix2[r2][c2] = scan.nextDouble();
            
         }//End second nested for
         
      }//End second for
      
      double[][] matrix3 = addMatrix(matrix1, matrix2);
      
      if (matrix3 != null)
      {
         
         for (int r3 = 0; r3 < matrix3.length; r3++)
         {
            
            for (int c3 = 0; c3 < matrix3[r3].length; c3++)
            {
               
               System.out.print(matrix3[r3][c3] + "\t");
               
            }//End third nested for
            
         System.out.println();
         
         }//End third for
         
      }//End if
      
      else
         System.out.println("Matricies could not be added due to a size mismatch.");
   
   }//End main
   
   public static double[][] addMatrix(double[][] a, double[][] b)
   {
      
      //Check for match
      if ((a.length == b.length) && (a[1].length == b[1].length))
      {
         
         //New array to store sums
         double[][] newArray = new double[a.length][a[1].length];
         
         for (int r = 0; r < a.length; r++)
         {
            
            for (int c = 0; c < a[1].length; c++)
            {
               
               newArray[r][c] = a[r][c] + b[r][c];
               
            }//End nested for
            
         }//End for
         
         return newArray;
         
      }//End if
      
      else
         return null;
         
   }//End addMatrix
   
}//End class