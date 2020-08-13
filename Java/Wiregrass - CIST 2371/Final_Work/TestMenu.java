import java.util.*;

public class TestMenu
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
            
            while (employeeMenu != 3)
            {
               
               String id = "12345678"; //Adding to see if a correct password will work
               //Employee Log-in
               System.out.println("\nACME Employee Log-In");
               System.out.println("=================");
               System.out.println("Example is: XXXXXXXX");
               System.out.println("Enter Employee ID: ");
               id = scan.nextLine(); 
               
               //not letting Employee enter thier ID to be checked and auto denies it             
                            
               if (Employee.verifyID(id) == true)
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
               else
               {
                  System.out.println("\nInvalid ID.");
                  break;
               }//End else
               
            }//End while
               
         }//end if 1
         
         if (mainMenu == 2)
         {
            
            //Customer Menu
            System.out.println("\nACME Customer Menu");
            System.out.println("==================");
            System.out.println("1: View Flight Schedule");
            System.out.println("2: Buy a ticket");
            System.out.println("3: Exit");
            System.out.print("\nEnter Choice: ");
            customerMenu = scan.nextInt();            
                           
            if (customerMenu == 1)
               //Customer.flightSchedule(); "cannot be referenced from a static context"
               
            if (customerMenu == 2)
            {
               //Lets customer pretend to buy tickets
            }//End customerMenu 2
            
            if (customerMenu == 3)
               break;              
            
         }//End if 2
         
      }//End while
      
   }//End main
   
}//End class