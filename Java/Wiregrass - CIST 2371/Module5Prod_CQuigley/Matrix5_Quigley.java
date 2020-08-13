//****************************************************
//Author:       Collin Quigley
//Date Created: 12/9/2015
//Class:        CIST 2371 - Java I
//Project:      Module 5 Production Exam
//Title:        Random 1/0 20x20 Matrix
//Description:  A 20x20 Matrix with random 1s and 0s inside  
//****************************************************

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import java.util.Random;
import javafx.scene.control.TextField;

public class Matrix5_Quigley extends Application
{
   public static void main(String[] args) { launch(args); }
   @Override //Overriding the main to create the start
   
   //Creating the application
   public void start (Stage stage)
   {
      
      //Declaring
      Random ran = new Random(2);      
      GridPane pane = new GridPane();
      pane.setAlignment(Pos.CENTER);
      pane.setHgap(3); //Set HGap to 3 because it looks slightly better to me
      pane.setVgap(2);    
            
      //Displaying grid
      for (int i = 0; i < 20; i++)
         for (int j = 0; j < 20; j++)
         {
            int rand = ran.nextInt(2);
            String num = "";
            if (rand == 1)
               num = "1";
            else
               num = "0";
            pane.add(new TextField (num), j, i);
         }//End for
            
      //Setting and creating scene
      Scene scene = new Scene(pane, 520, 550);
      stage.setTitle("Collin Quigley - Matrix 01");
      stage.setScene(scene);
      stage.show();   
      
   }//End Start
   
}//End class