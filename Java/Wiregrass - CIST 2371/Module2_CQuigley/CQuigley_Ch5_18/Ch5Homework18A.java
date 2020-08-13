//****************************************************
//Author:       Collin Quigley
//Date Created: 9/23/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 5.18A
//Title:        Display Pattern
//Description:  Displays a certain pattern  
//****************************************************

import java.util.*;

public class Ch5Homework18A
{
   public static void main(String[] args)
   {
      final int MAX = 6;
      
      for(int i = 1; i <= MAX; i++)
      {
                  
         for(int j = 1; j <= i; j++)
         {
            
            System.out.print(j + " ");
                     
         }//End j for
      
         System.out.println();
      
      }//End i for    
   
   }//End main

}//End class