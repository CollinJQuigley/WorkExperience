//****************************************************
//Author:       Collin Quigley
//Date Created: 11/16/2015
//Class:        CIST 2371 - Java I
//Project:      Module 5 HW 14.7
//Title:        Random 1 or 0
//Description:  Display a random 1 0r 0 in a 10x10 grid
//****************************************************

import javafx.application.Application;
import java.util.Collections;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import java.util.Random;
import javafx.scene.control.TextField;

public class Random1Or0 extends Application
{
   
   public static void main(String[] args) { launch(args); }
   @Override //To over ride the main method and run the application
   
   public void start (Stage stage)
   {
      
      //Creating random 1 or 0
      Random ran = new Random(2);
      
      //Creating GridPane
      GridPane pane = new GridPane();
      pane.setAlignment(Pos.CENTER);
      pane.setHgap(2);
      pane.setVgap(2);    
            
      //Creating display
      for (int r = 0; r < 10; r++)
         for (int c = 0; c < 10; c++)
         {
            int rand = ran.nextInt(2);
            String num = "";
            if (rand == 1)
               num = "1";
            else
               num = "0";
            pane.add(new TextField (num), c, r);
         }//End for
            
      //Create scene and place pane on it and then place the scene on the stage
      Scene scene = new Scene(pane, 300, 275);
      stage.setTitle("Random 1 or 0");
      stage.setScene(scene);
      stage.show();
      
   }//End start
   
}//End class