package com.example.sixth;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.stage.Stage;
import javafx.scene.layout.FlowPane;

public class Main extends Application {
    @Override
    public void start(Stage stage) {
        TextField t = new TextField();
        Button btn = new Button("Submit");
        FlowPane root = new FlowPane();
        root.getChildren().addAll(t, btn);
        Scene scene = new Scene(root, 500, 500);
        stage.setTitle("JavaFX App");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
