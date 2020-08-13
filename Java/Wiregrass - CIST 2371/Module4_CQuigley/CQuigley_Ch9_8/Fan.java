//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.8
//Title:        Fan Class
//Description:  Create a Fan class  
//****************************************************

class Fan
{
   
   //Decalring
   int SLOW = 1;
   int MEDIUM = 2;
   int FAST = 3;
   private int speed = SLOW;
   private boolean on;
   private double radius;
   String color;
   
   //No-arg
   Fan()
   {
      speed = SLOW;
      on = false;
      radius = 5;
      color = "Blue";
   }
   
   //Get info
   public int getSpeed() { return speed; }   
   public boolean isOn() { return on; }   
   public double getRadius() { return radius; }   
   public String getColor() { return color; }
   
   //Set info
   public void setSpeed(int speed) { this.speed = speed; }   
   public void setOn(boolean on) { this.on = on; }   
   public void setRadius(double radius) { this.radius = radius; }   
   public void setColor(String color) { this.color = color; }
   
   //Create result Strings
   public String toString()
   {
      
      if ( isOn() )
      {
         return "\nSpeed  = " + getSpeed() +
                "\nColor  = " + getColor() +
                "\nRadius = " + getRadius();  
      }//End if
      else
      {
         return "\nColor  = " + getColor() +
                "\nRadius = " + getRadius() +
                "\nFan is off";
      }//End else
      
   }//End toString
   
}//End class