//****************************************************
//Author:       Collin Quigley
//Date Created: 9/23/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 5.18C
//Title:        Display Pattern
//Description:  Displays a certain pattern  
//****************************************************

import java.util.*;

public class Ch5Homework18C
{
   public static void main(String[] args)
   {
      final int MAX = 6;
      final int LOW = 1;
      
      for(int i = 1; i <= MAX; i++)
      {
         String pad = "";
         
         for(int p = 1; p <= (MAX - i); p++)
             pad += "  ";
             
         System.out.print(pad);
         
         for(int j = i; j >= LOW; j--)
         {
            
            System.out.print(j + " ");
                    
         }//End j for
      
         System.out.println();
      
      }//End i for    
   
   }//End main

}//End class





