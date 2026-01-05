// Base class
class Vehicle {
    protected String brand;
    protected String model;
    protected int year;
    protected double price;

    Vehicle(String brand, String model, int year, double price) {
        this.brand = brand;
        this.model = model;
        this.year = year;
        this.price = price;
    }

    // Method to display vehicle information
    void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
        System.out.println("Price: Rs. " + price);
    }

    // Standard depreciation: 10% per year
    double calculateDepreciation(int currentYear) {
        int age = currentYear - year;
        double rate = 0.10;
        return price * Math.pow(1 - rate, age);
    }

    // Returns vehicle type
    String getVehicleType() {
        return "Vehicle";
    }
}

// Derived class: Car
class Car extends Vehicle {
    private int doors;
    private String fuelType; // Petrol, Diesel, Electric

    Car(String brand, String model, int year, double price, int doors, String fuelType) {
        super(brand, model, year, price); // constructor chaining
        this.doors = doors;
        this.fuelType = fuelType;
    }

    @Override
    void displayInfo() {
        super.displayInfo();
        System.out.println("Doors: " + doors);
        System.out.println("Fuel Type: " + fuelType);
    }

    @Override
    double calculateDepreciation(int currentYear) {
        int age = currentYear - year;
        double rate = fuelType.equals("electric") ? 0.08 : 0.10;
        return price * Math.pow(1 - rate, age);
    }

    @Override
    String getVehicleType() {
        return "Car";
    }
}

// Derived class: Motorcycle
class Motorcycle extends Vehicle {
    private int engineCC;
    private boolean hasABS;

    Motorcycle(String brand, String model, int year, double price, int engineCC, boolean hasABS) {
        super(brand, model, year, price); // constructor chaining
        this.engineCC = engineCC;
        this.hasABS = hasABS;
    }

    @Override
    void displayInfo() {
        super.displayInfo();
        System.out.println("Engine Capacity: " + engineCC + " cc");
        System.out.println("ABS: " + (hasABS ? "Yes" : "No"));
    }

    @Override
    double calculateDepreciation(int currentYear) {
        int age = currentYear - year;
        double rate = hasABS ? 0.12 : 0.15;
        return price * Math.pow(1 - rate, age);
    }

    @Override
    String getVehicleType() {
        return "Motorcycle";
    }
}

// Main class
public class VehicleManagementSystem {
    public static void main(String[] args) {
        int currentYear = 2024;

        Vehicle[] vehicles = new Vehicle[3];
        vehicles[0] = new Car("Tesla", "Model 3", 2021, 5500000, 4, "electric");
        vehicles[1] = new Car("Toyota", "Corolla", 2020, 4000000, 4, "petrol");
        vehicles[2] = new Motorcycle("Yamaha", "R15", 2022, 450000, 155, true);

        for (Vehicle v : vehicles) {
            System.out.println("Vehicle Type: " + v.getVehicleType());
            v.displayInfo();
            System.out.println("Value in " + currentYear + ": Rs. " + v.calculateDepreciation(currentYear));
            System.out.println("----------------------------------");
        }
    }
}
