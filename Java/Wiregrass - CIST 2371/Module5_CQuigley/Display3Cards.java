//****************************************************
//Author:       Collin Quigley
//Date Created: 11/16/2015
//Class:        CIST 2371 - Java I
//Project:      Module 5 HW 14.3
//Title:        3 Cards
//Description:  Display 3 random cards from a deck 
//****************************************************

import javafx.application.Application;
import java.util.Collections;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;
import javafx.scene.image.ImageView;
import java.util.ArrayList;

public class Display3Cards extends Application
{

   public static void main(String[] args) { launch(args); }
   @Override //To over ride the main method and run the application
   
   //Start to the application
   public void start (Stage stage)
   {
      
      //Declaring
      String path = "card/";
      final int MAX = 52;      
      ArrayList<Integer> list = new ArrayList<>();
      
      //Filling the ArrayList
      for (int i = 0; i <= MAX; i++)
         list.add(i);
      
      //Shuffling list
      Collections.shuffle(list);
      
      //Creating display
      HBox pane = new HBox(5);
      pane.setAlignment(Pos.CENTER);
      
      //Select 3 random cards/index from the list/arraylist
      for (int i = 0; i < 3; i++)
         pane.getChildren().add(new ImageView(path + list.get(i) + ".png"));
         
      //Create scene and place pane on it and then place the scene on the stage
      Scene scene = new Scene(pane);
      stage.setTitle("Display 3 cards");
      stage.setScene(scene);
      stage.show();     
      
   }//End start

}//End class