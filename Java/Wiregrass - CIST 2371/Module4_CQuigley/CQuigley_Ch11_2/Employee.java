//****************************************************
//Author:       Collin Quigley
//Date Created: 10/30/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.2
//Title:        People Classes
//Description:  Create multiple people classes  
//****************************************************

class Employee extends Person
{
   
   //Declaring
   private String Eoffice;
   private double ESalary;
   
   public Employee (String name, String address, int phonenumber, String email)
   {
      super (name, address, phonenumber, email);
   }
   
}//End class