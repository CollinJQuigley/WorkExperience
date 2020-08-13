//****************************************************
//Author:       Collin Quigley
//Date Created: 10/14/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Production Exam
//Title:        Diagonal Matrix Sum
//Description:  Find the diagonal sum of the Matrix  
//****************************************************

import java.util.*;

public class matrix_Quigley
{
   public static void main(String[] args)
   {
      
      //Declaring
      int[][] matrix = new int[4][4];
      int diagonalSum;
      
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      for (int r = 0; r < matrix.length; r++)
      {
         for (int c = 0; c < matrix[r].length; c++)
         {
            System.out.print("Please enter a number for row " + (r + 1) + " and column " + (c + 1) + ".");   
            matrix[r][c] = scan.nextInt();
         }//End second for
         
      }//End first for
      
      //Getting info from method
      diagonalSum = sumMajorDiagonal(matrix);
      
      //Outputting results
      System.out.println("Sum of the elements in the major diagonal is: " + diagonalSum + ".");
      
   }//End main
   
   public static int sumMajorDiagonal(int[][] m)
   {
      //Declaring
      int sum = 0;
      
      //Finding diagonal sum
      for (int r = 0; r < m.length; r++)
      {
         for (int c = r; c < (r + 1); c++)
         {
            sum += m[r][c];
            
         }//End second for
         
      }//End first for
      
      return sum;
      
   }//End sumMajorDiagonal
   
}//End class