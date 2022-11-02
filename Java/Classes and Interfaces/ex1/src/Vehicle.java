import com.sun.nio.sctp.SctpSocketOption;

public abstract class Vehicle {
    private int maxSpeed;
    private String model;
    private double price;

    public Vehicle(int maxSpeed, String model, double price){
        this.maxSpeed = maxSpeed;
        this.price = price;
        this.model = model;
    }

    public int MaxSpeed(){
        return this.maxSpeed;
    }

    public void SetMaxSpeed(int maxSpeed){
        this.maxSpeed = maxSpeed;
    }

    public String Model(){
        return this.model;
    }

    public void SetModel(String model){
        this.model = model;
    }

    public double Price(){
        return this.price;
    }

    public void SetPrice(double price){
        this.price = price;
    }

    public abstract double checkPromo();
}