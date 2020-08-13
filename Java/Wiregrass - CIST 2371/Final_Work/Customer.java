class Customer
{
   
   //Declaring
   private int flightTicket;
   
   Customer () {}
   
   Customer (int flightTicket)
   {
      setFT(flightTicket);
   }
   
   //Accessors
   public int getFT () { return flightTicket; }
   
   //Mutators
   public void setFT (int flightTicket) { this.flightTicket = flightTicket; }
   
   public void customerInfo()
   {
      System.out.println("The flight ticket number for your flight is " + getFT());
   }
   
   public void flightSchedule()
   {
      System.out.println("Valdosta GA - Miami FL   - 13:00 - Arriving");
      System.out.println("Valdosta GA - Miami FL   - 18:00 - Departing");
      System.out.println("Valdosta GA - Miami FL   - 20:00 - Departing");
      System.out.println("Valdosta GA - Orlando FL - 3:00  - Arriving");
      System.out.println("Valdosta GA - Orlando FL - 12:00 - Arriving");
      System.out.println("Valdosta GA - Orlando FL - 10:00 - Departing");      
   }//End flightSchedule
   
}//End Customer