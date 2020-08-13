//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.1
//Title:        Rectangle Class
//Description:  Create a Rectangle class  
//****************************************************

public class Rectangle
{
   
   //Declaring
   double width = 1.0;
   double height = 1.0;
   
   //No-arg 
   Rectangle(){}
   
   Rectangle(double newWidth, double newHeight)
   {
      
      width = newWidth;
      height = newHeight;
      
   }//End Rectangle
   
   double getArea()
   {
     
      return ((width * height) * 10) / 10;
  
   }//End getArea
   
   double getPerimeter()
   {
      
      return 2 * (width + height);
   
   }//End getPerimeter

}//End class