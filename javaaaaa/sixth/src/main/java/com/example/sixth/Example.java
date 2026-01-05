package com.example.sixth;
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.FlowPane;
import javafx.event.*;

public class Example extends Application implements EventHandler<ActionEvent> {
    Button btn;
    FlowPane root;
    @Override
    public void start(Stage stage) {
        btn = new Button("Red");
        root = new FlowPane();
        root.getChildren().add(btn);
        Scene scene = new Scene(root, 500, 500);
        stage.setScene(scene);
        stage.show();
        btn.setOnAction(this);
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        root.setStyle("-fx-background-color: red");
    }
    public static void main(String[] args) {
        launch(args);
    }
}
