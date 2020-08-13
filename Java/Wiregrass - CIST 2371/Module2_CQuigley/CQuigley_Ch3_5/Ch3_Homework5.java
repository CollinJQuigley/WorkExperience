//****************************************************
//Author:       Collin Quigley
//Date Created: 9/17/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 3.5
//Title:        Find Future Dates
//Description:  User gives date and future date to calculate  
//****************************************************

import java.util.*;

public class Ch3_Homework5
{
   public static void main(String[] args)
   {
      int todayDate, futureDate;
      String todayName = "date";
      String futureName = "other date";
      int MAX = 6;
      int LOW = 0;
      
      Scanner input = new Scanner(System.in);
      
      System.out.print("Enter today's day: ");
      todayDate = input.nextInt();
      
      System.out.print("Enter the number of days elapsed since today: ");
      futureDate = input.nextInt() + todayDate;
      
      if(futureDate > MAX)
      {
         futureDate =  futureDate % 6;
      }//END IF
      
      switch (todayDate)
      {
         case 0: todayName = "Sunday"; break;
         case 1: todayName = "Monday"; break;
         case 2: todayName = "Tuesday"; break;
         case 3: todayName = "Wednesday"; break;
         case 4: todayName = "Thursday"; break;
         case 5: todayName = "Friday"; break;
         case 6: todayName = "Saturday"; break;
      }//END TODAY SWITCH
      
      switch (futureDate)
      {
         case 0: futureName = "Sunday"; break;
         case 1: futureName = "Monday"; break;
         case 2: futureName = "Tuesday"; break;
         case 3: futureName = "Wednesday"; break;
         case 4: futureName = "Thursday"; break;
         case 5: futureName = "Friday"; break;
         case 6: futureName = "Saturday"; break;
      }//END FUTURE SWITCH
      
      System.out.println("Today is " + todayName + " and the future day is " + futureName + ".");
      
   }//END MAIN
}//END CLASS