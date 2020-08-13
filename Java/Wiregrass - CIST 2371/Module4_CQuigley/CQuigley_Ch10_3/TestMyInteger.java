//****************************************************
//Author:       Collin Quigley
//Date Created: 10/29/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 10.3
//Title:        MyInteger Class
//Description:  Create an Integer class  
//****************************************************

import java.util.*;

public class TestMyInteger
{
   public static void main(String[] args)
   {
      
      //Declaring
      char[] c = { '1', '2', '3', '4' };
      String s = "123456789";
      
      //Creating scanner
      Scanner input = new Scanner(System.in);
      
      //Getting number
      System.out.println("Enter a number: ");
      int a = input.nextInt();
      
      //creating object
      MyInteger i1 = new MyInteger(a);
      
      //Outputting info
      System.out.println(a + " is even?        " + i1.isEven());
      System.out.println(a + " is odd?         " + i1.isOdd());
      System.out.println(a + " is Prime?       " + i1.isPrime());
      System.out.println("Is 17 Prime?      " + MyInteger.isPrime(17));     
      System.out.println("Characters " + MyInteger.parseInt(c));     
      System.out.println("String is " + MyInteger.parseInt(s));
      System.out.println("Is 11 odd?        " + MyInteger.isOdd(11));
      System.out.println("Is 12 even?       " + MyInteger.isEven(12));
      System.out.println("Is " + a + " equal to 20? " + i1.equals(20));
   
   }//End main
   
}//End class