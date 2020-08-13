//****************************************************
//Author:       Collin Quigley
//Date Created: 9/23/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 5.19
//Title:        Display Pattern
//Description:  Displays a certain pattern  
//****************************************************

import java.util.*;

public class Ch5Homework19
{
   public static void main(String[] args)
   {
      final int MAX = 8;
      final int LOW = 1;
      final int HIGHEST = 128;
      
      for(int i = 0; i < MAX; i++)
      {
         String pad = "";
         
         for(int p = 1; p <= (MAX - i); p++)
             System.out.printf("%s", "    ");         
         
         for(int j = 0; j <= i; j++)
         {
            
            System.out.printf("%4d", (int)Math.pow(2,j));
                    
         }//End j for
         
         for(int k = (i - 1); k >= 0; k--)
         {
            
            System.out.printf("%4d", (int)Math.pow(2,k));
                 
         }//End k for
                  
         System.out.println();
      
      }//End i for    
   
   }//End main

}//End class

