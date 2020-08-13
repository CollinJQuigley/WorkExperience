//****************************************************
//Author:       Collin Quigley
//Date Created: 9/2/2015
//Class:        CIST 2371 - Java I
//Project:      Module 1 Production Exam
//Title:        Acme Payroll
//Description:  Figure out the payroll of our very own Mrs. Stone 
//****************************************************

import java.util.*;

public class Payroll_Quigley
{
   public static void main(String[] args)
   {
      
      //Declarations
      double hourlyPay, hoursWorked, grossPay, stateTax, fedTax, netPay;
      String fName, lName;
      final double FEDTAX = 0.20;
      final double STATETAX = 0.09;
      Scanner scan = new Scanner(System.in);
      
      //Getting info
      System.out.print("Enter employee's first name: ");
         fName = scan.next();
         
      System.out.print("Enter employee's last name: ");
         lName = scan.next();
         
      System.out.print("Enter the number of hours Deborah worked: ");
         hoursWorked = scan.nextDouble();
      
      System.out.print("Enter payrate for Deborah: ");
         hourlyPay = scan.nextDouble();
      
      //Calculating data
      grossPay = ((hoursWorked * hourlyPay) * 100) / 100.0;
      fedTax = ((grossPay * FEDTAX) * 100) / 100.0;
      stateTax = ((grossPay * STATETAX) * 100) / 100.0;
      netPay = (grossPay - fedTax) - stateTax;
      
      //Outputting results
      System.out.println("A C M E   P A Y R O L L");
      System.out.println("=======================");
      System.out.println("Employee name: " + fName + " " + lName + " " );
      System.out.println("Hours worked:  " + (hoursWorked * 100) / 100.0);
      System.out.println("Payrate:       $" + (hourlyPay * 100) / 100.0);
      System.out.println("Gross Pay:     $" + grossPay + " ");
      System.out.println("FED Tax:       $" + fedTax + " ");
      System.out.println("STATE Tax:     $" + stateTax + " ");
      System.out.println("Net Pay:       $" + netPay + " ");
      
   }//END MAIN
}//END CLASS