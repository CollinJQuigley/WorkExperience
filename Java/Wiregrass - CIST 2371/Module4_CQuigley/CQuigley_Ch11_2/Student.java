//****************************************************
//Author:       Collin Quigley
//Date Created: 10/30/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.2
//Title:        People Classes
//Description:  Create multiple people classes  
//****************************************************

class Student extends Person
{
   
   //Declaring
   public String sStatus;
   
   public Student(String name, String address, int phonenumber, String email, String status)
   {
      super (name, address, phonenumber, email);
      sStatus = status;
   }
   
}//End class