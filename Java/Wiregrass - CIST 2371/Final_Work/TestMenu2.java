import java.util.*;
//TestMenu2 is what I use to test different ways to solve the Log-in problem without messing up my code
public class TestMenu2
{
   
   public static void main(String[] args)
   {
      
      //Declaring
      int flightTicket;
      int mainMenu = 4;      
      
      Scanner scan = new Scanner(System.in);
      
      while (mainMenu != 3)
      {
         
         int employeeMenu = 0;
         int customerMenu = 0;
         //Menu
         System.out.println("\nACME Airport Menu");
         System.out.println("=================");
         System.out.println("1: Employee Log-In");
         System.out.println("2: Customer Menu");
         System.out.println("3: Exit");
         System.out.print("\nEnter Choice: ");
         mainMenu = scan.nextInt();
         
         if (mainMenu == 1)
         {            
               String id = " ";               
               //Employee Log-in
               System.out.println("\nACME Employee Log-In");
               System.out.println("=================");
               System.out.println("Example is: XXXX-XXXX");
               System.out.println("Enter Employee ID: ");
               id = scan.nextLine();              
                            
               if (Employee.verifyID(id) == true)
               {
                  while (employeeMenu != 3)
                  {

                     //Employee Menu
                     System.out.println("\nACME Employee Menu");
                     System.out.println("=================");
                     System.out.println("1: Safety Check");
                     System.out.println("2: Maintain Work Order");
                     System.out.println("3: Exit");
                     System.out.print("\nEnter Choice: ");
                     employeeMenu = scan.nextInt();
                  }
   
               }
               else
               {
                  System.out.println("Invalid ID.");
                  break;
               }//End else
               
         }//end if 1
         
         if (mainMenu == 2)
         {
            
            //Customer Menu
            System.out.println("\nACME Customer Menu");
            System.out.println("=================");
            System.out.println("1: View Flight Schedule");
            System.out.println("2: Buy a ticket");
            System.out.println("3: Exit");
            System.out.print("\nEnter Choice: ");
            customerMenu = scan.nextInt();
            
         }//End if 2
         
      }//End while
      
   }//End main
   
}//End class