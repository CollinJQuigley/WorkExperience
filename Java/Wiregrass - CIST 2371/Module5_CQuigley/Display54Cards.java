//****************************************************
//Author:       Collin Quigley
//Date Created: 11/16/2015
//Class:        CIST 2371 - Java I
//Project:      Module 5 HW 14.8
//Title:        Display 54 cards
//Description:  Display 54 random cards from a deck 
//****************************************************

import javafx.application.Application;
import java.util.Collections;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import javafx.scene.image.ImageView;
import java.util.ArrayList;

public class Display54Cards extends Application
{

   public static void main(String[] args) { launch(args); }
   @Override //To over ride the main method and run the application
   
   //Start to the application
   public void start (Stage stage)
   {
      
      //Declaring
      String path = "card/";
      final int MAX = 54; 
      int d = 1;     
      ArrayList<Integer> list = new ArrayList<>();
      
      //Filling the ArrayList
      for (int i = 0; i <= MAX; i++)
         list.add(i);
      
      //Creating display
      GridPane pane = new GridPane();
      pane.setAlignment(Pos.CENTER);
      pane.setHgap(5);
      pane.setVgap(5);
      
      //Randomize cards/index from the list/arraylist
      for (int r = 0; r < 6; r++)
         for (int c = 0; c < 9; c++)  
         {            
            pane.add(new ImageView(path + list.get(d++) + ".png"), c, r);
            
         }
         
      //Create scene and place pane on it and then place the scene on the stage
      Scene scene = new Scene(pane);
      stage.setTitle("Display 54 cards");
      stage.setScene(scene);
      stage.show();     
      
   }//End start

}//End class