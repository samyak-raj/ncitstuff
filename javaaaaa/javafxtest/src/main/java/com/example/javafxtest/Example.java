package com.example.javafxtest;
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.FlowPane;

public class Example extends Application{
    public void start(Stage stage) {
        TextField t = new TextField();
        Button b = new Button("Click");
        FlowPane root = new FlowPane();
        root.getChildren().addAll(t, b);
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
