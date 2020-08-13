import java.util.Scanner;

class Employee
{
   
   //Declaring
   private String id;
   
   Employee () {}
   
   Employee (String id)
   {
      setID(id);
   }
   
   public static boolean verifyID (String id)
   {
      boolean isValid = true;
      
      if (id.length() == 8)      
      isValid = true;
      
         //if (id.charAt(4) == '-')
         //{
            //String replace = id.replaceAll("-", "");
            
            //Check digits placement
            //for (int i = 0; i < id.length(); i++)//replace was originally where id was in .length
            //{
               //if (Character.isDigit(id.charAt(i)))//replace was originally where id was in .length
               //{
                  //isValid = true;
               //}//End if
              //else
               //{
                  //isValid = false; 
                  //break;
               //}//End else
               
            //}//End for

         //}//End second if
         //else
            //isValid = false;
            
      return isValid;
      
   }//End verifyID
   
   //Accessors
   public String getID() { return id; }
   
   //Mutators
   public void setID(String id) { this.id = id; }
   
   public void employeeInfo()
   {
      System.out.println("The ID# of this employee is " + getID());
   }   
   
}//End class