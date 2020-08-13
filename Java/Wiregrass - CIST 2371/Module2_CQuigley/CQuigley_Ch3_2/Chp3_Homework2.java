//****************************************************
//Author:       Collin Quigley
//Date Created: 9/17/2015
//Class:        CIST 2371 - Java I
//Project:      Module 2 HW 3.2
//Title:        Add Three Numbers
//Description:  Gives an addition problem with three random numbers  
//****************************************************

import java.util.Scanner;

public class Chp3_Homework2
{
   public static void main(String[] args)
   {
      int number1 = (int)(System.currentTimeMillis() % 10);
      int number2 = (int)(System.currentTimeMillis() / 7 % 10);
      int number3 = (int)(System.currentTimeMillis() / 3 % 10);
      
      Scanner input = new Scanner(System.in);
      
      System.out.print("What is " + number1 + " + " + number2 + " + " + number3 + "? ");
      
      int number = input.nextInt();
      
      System.out.println( number1 + " + " + number2 + " + " + number3 + " = " + number + " is " + (number1 + number2 + number3 == number));
      
   }//END MAIN
}//END CLASS