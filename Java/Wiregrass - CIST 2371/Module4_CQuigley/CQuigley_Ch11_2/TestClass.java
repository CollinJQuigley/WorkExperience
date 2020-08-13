//****************************************************
//Author:       Collin Quigley
//Date Created: 10/30/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.2
//Title:        People Classes
//Description:  Create multiple people classes  
//****************************************************

public class TestClass
{
   public static void main(String[] args)
   {
      
      //Sending info
      Person p = new Person("Rick", "Georgia", 990123, "liverick@gmail.com");
      Person s = new Student("Carl", "Georgia", 9876, "stillherecarl@yahoo.com", "Junior");
      Person e = new Employee("Glen", "Dead Place", 23451, "serviveglen@awg.in");
      Person f = new Faculty("Daryl", "South", 13321, "redneckzombieman@qa.com");
      Person st = new Staff("Zombie", "Unkown", 22111, "gonnagetcha@yahoo.in");
      
      //Outputting info
      System.out.println(p.toString());
      System.out.println(s.toString());
      System.out.println(e.toString());
      System.out.println(f.toString());
      System.out.println(st.toString());
      
   }//End main
   
}//End class