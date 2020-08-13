//****************************************************
//Author:       Collin Quigley
//Date Created: 10/28/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 9.1
//Title:        Rectangle Class
//Description:  Create a Rectangle class  
//****************************************************

import java.util.*;

public class RectangleTest
{
   public static void main(String[] args)
   {
      //Declaring
      Rectangle rectangle1 = new Rectangle(4, 40);      
      Rectangle rectangle2 = new Rectangle(3.5, 35.9);
      
      
      //Outputting info of Rectangle 1
      System.out.println("The details of the first rectangle: ");
      System.out.println("Width of Rectangle1: " + rectangle1.width);
      System.out.println("Height of Rectangle1: " + rectangle1.height);
      System.out.println("Area of Rectangle1: " + rectangle1.getArea());
      System.out.println("Perimeter of Rectangle1: " + rectangle1.getPerimeter());
      System.out.println();
      
      //Outputting info of Rectangle 2
      System.out.println("The details of the second rectangle: ");
      System.out.println("Width of Rectangle2: " + rectangle2.width);
      System.out.println("Height of Rectangle2: " + rectangle2.height);
      System.out.println("Area of Rectangle2: " + rectangle2.getArea());
      System.out.println("Perimeter of Rectangle2: " + rectangle2.getPerimeter());
      
   }//End main

}//End class 