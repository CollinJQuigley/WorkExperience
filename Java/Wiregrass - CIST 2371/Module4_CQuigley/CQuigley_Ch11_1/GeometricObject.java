//****************************************************
//Author:       Collin Quigley
//Date Created: 10/29/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.1
//Title:        Triangle with GeometricObject Class
//Description:  Create a Triangle and a Geometric Object class  
//****************************************************

public class GeometricObject
{
   //Declaring
   private String tColor;
   private boolean isfilled;
   
   //Get and Setting info
   public String getcolor() { return tColor; }
   
   public void putcolor(String c) { this.tColor = c; }
   
   public void setFill (boolean fill) { isfilled = fill; }
   
   public boolean isFilled() { return isfilled; }
   
}//End class
