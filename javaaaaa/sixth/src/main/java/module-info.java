module com.example.sixth {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.sixth to javafx.fxml;
    exports com.example.sixth;
}