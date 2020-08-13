//****************************************************
//Author:       Collin Quigley
//Date Created: 10/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 3 Ch8 Homework1
//Title:        Finding sum of Array
//Description:  Finding the sum of a column in a multi-deminsional array.  
//****************************************************

import java.util.*;

public class Ch8Homework1
{
   public static void main(String[] args)
   {
      
      //Declaring
      double[][] matrix = new double[3][4];
      double col1, col2, col3, col4;
      
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      for (int r = 0; r < matrix.length; r++)
      {
         for (int c = 0; c < matrix[0].length; c++)
         {
            System.out.println("Please enter a number into the Matrix: ");
            matrix[r][c] = scan.nextDouble();
         }
      }  
      
      //Retrieving info from sumColumn
      col1 = sumColumn(matrix, 0);
      col2 = sumColumn(matrix, 1);
      col3 = sumColumn(matrix, 2);
      col4 = sumColumn(matrix, 3);
      
      System.out.println("The sum of column 1 is " + col1 + ".");
      System.out.println("The sum of column 2 is " + col2 + ".");
      System.out.println("The sum of column 3 is " + col3 + ".");
      System.out.println("The sum of column 4 is " + col4 + ".");
                
   }//End main
   
   public static double sumColumn(double[][] m, int columnIndex)
   {
      
      //Declaring
      double sum = 0;
      
      //Finding sum
      for (int i = 0; i < m.length; i++)
      {
         sum += m[i][columnIndex];
      }
      
      return sum;
      
   }//End sumColumn
}//End class