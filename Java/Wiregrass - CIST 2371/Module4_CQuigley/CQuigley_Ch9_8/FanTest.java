//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.8
//Title:        Fan Class
//Description:  Create a Fan class  
//****************************************************

public class FanTest
{
  
   public static void main(String[] args)
   {
      
      //Declaring
      Fan fan1 = new Fan();
      Fan fan2 = new Fan();
      
      int SLOW = 1;
      int MEDIUM = 2;
      int FAST = 3;
      
      //Sending info for fan1
      fan1.setSpeed(FAST);
      fan1.setRadius(10.0);
      fan1.setColor("Yellow");
      fan1.setOn(true);
      
      //Sending info for fan2
      fan2.setSpeed(MEDIUM);
      fan2.setRadius(5.0);
      fan2.setColor("Blue");
      fan2.setOn(false);
      
      //Outputting info
      System.out.println("FAN 1: " + fan1.toString());
      System.out.println("FAN 2: " + fan2.toString());
      
   }//End main
   
}//End class