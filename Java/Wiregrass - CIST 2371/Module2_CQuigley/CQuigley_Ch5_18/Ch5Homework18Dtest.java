import java.util.*;

public class Ch5Homework18Dtest
{
   public static void main(String[] args)
   {
      final int MAX = 6;
      final int LOW = 1;
      
      for(int i = 6; i >= LOW; i--)
      {
         String pad = "";
         
         for(int p = 1; p <= (MAX - i); p++)
            pad += "  ";
            
         System.out.print(pad);         
         
         for(int j = 1; j <= i; j++)
         {
            
            System.out.print(j + " ");
                     
         }//End j for
      
         System.out.println();
      
      }//End i for    
   
   }//End main

}//End class