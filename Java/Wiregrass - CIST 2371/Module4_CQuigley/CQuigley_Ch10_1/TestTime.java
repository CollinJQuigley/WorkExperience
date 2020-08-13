//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 10.1
//Title:        Time Class
//Description:  Create a class for Time  
//****************************************************

public class TestTime
{
   
   public static void main(String[] args)
   {
      
      //Declaring
      Time t1 = new Time();
      Time t2 = new Time(555550000);
      
      //Outputting info
      System.out.println("Time 1: Hour(s) " + t1.getHours() + ": Minute(s) " + t1.getMinutes() + ": Second(s) " + t1.getSeconds());
      System.out.println("Time 2: Hour(s) " + t2.getHours() + ": Minute(s) " + t2.getMinutes() + ": Second(s) " + t2.getSeconds());
     
   }//End main
   
}//End class