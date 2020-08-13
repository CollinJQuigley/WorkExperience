//****************************************************
//Author:       Collin Quigley
//Date Created: 10/29/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.1
//Title:        Triangle with GeometricObject Class
//Description:  Create a Triangle and a Geometric Object class  
//****************************************************

import java.util.*;

public class Triangle extends GeometricObject
{
   //Declaring info
   private double side1;
   private double side2;
   private double side3;
   
   public static void main(String[] args)
   {
      //Declaring info
      double s1, s2, s3;
      String color;
      boolean fill;
      
      //Creating scanner
      Scanner scan = new Scanner(System.in);
      
      //Get color
      System.out.println("Enter color: ");
      color = scan.nextLine();
      
      //Get sides
      System.out.println("Enter sides: ");
      s1 = scan.nextDouble();
      s2 = scan.nextDouble();
      s3 = scan.nextDouble();
      
      //Get if filled or not
      System.out.println("Fill triangle or not (true or false): ");
      fill = scan.nextBoolean();
      
      //Create new Triangle
      Triangle t = new Triangle (s1, s2, s3);
      
      t.putcolor(color);
      t.setFill(fill);
      
      //Outputting info
      System.out.println("Sides of " + t.toString());
      //I could not calculate the correct Area for the Triangle and it would only show the address of memory 
      //System.out.println("Area of the Triangle = " + t.getarea());
      System.out.println("Perimeter of the Triangle = " + t.getperimeter());
      System.out.println("Color of the Triangle is " + t.getcolor());
      System.out.println("Is Triangle filled? " + t.isFilled());
   }//End main
   
   public Triangle (double s1, double s2, double s3)
   {
      side1 = s1;
      side2 = s2;
      side3 = s3;
   }
   
   //Get info
   public double getside1() { return side1; }   
   public double getside2() { return side2; }   
   public double getside3() { return side3; }   
   public double getarea()
   {
      double s = (side1 + side2 + side3) / 2;
      double area = s * (s - side1) * (s - side2) * (s- side3 );
      return area;
   }   
   public double getperimeter() { return (side1 + side2 + side3); }
   
   //Create toString
   public String toString()
   {
      return "Triangle: \nSide1 = " + side1 + "\nSide2 = " + side2 + " \nSide3 = " + side3;
   }
   
}//End class