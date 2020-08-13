//****************************************************
//Author:       Collin Quigley
//Date Created: 10/30/2015
//Class:        CIST 2371 - Java I
//Project:      Module 4 HW 11.2
//Title:        People Classes
//Description:  Create multiple people classes  
//****************************************************

class Person
{
   //Declaring
   public String pName;
   public String pAddress;
   public int pNumber;
   public String pEmail;
   
   //Setting info
   public Person(String name, String address, int phonenumber, String email)
   {
      pName = name;
      pAddress = address;
      pNumber = phonenumber;
      pEmail = email;
   }
   
   //Output
   public String toString()
   {
      return getClass().getName() + "     " + pName;
   }
   
}//End class

