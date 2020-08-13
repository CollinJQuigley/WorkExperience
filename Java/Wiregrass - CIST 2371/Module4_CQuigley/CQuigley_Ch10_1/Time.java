//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 10.1
//Title:        Time Class
//Description:  Create a class for Time  
//****************************************************

public class Time
{
   //Declaring
   private int hours;
   private int minutes;
   private int seconds;
   
   //No-arg
   public Time()
   {
      long currentTime = System.currentTimeMillis();
      
      currentTime += 3600000 * 5;
      currentTime += 60000 * 30;
      
      setTime(currentTime);
   }
   
   public Time(long elapseTime) { setTime(elapseTime); }
   
   public Time(int hours, int minutes, int seconds)
   {
      this.hours = hours;
      this.minutes = minutes;
      this.seconds = seconds;
   }
   
   //Set time
   public void setTime(long elapseTime)
   {
      long totalSeconds = elapseTime / 1000;
      this.seconds = (int)(totalSeconds % 60);
      long totalMinutes = totalSeconds / 60;
      this.minutes = (int)(totalMinutes % 60);
      long totalHours = totalMinutes / 60;
      this.hours = (int)(totalHours % 24);
   }
   
   //Get time
   public int getHours() { return this.hours; }   
   public int getMinutes() { return this.minutes; }   
   public int getSeconds() { return this.seconds; }
   
}//End class