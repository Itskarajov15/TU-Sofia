public abstract class Trip {
    private String destination;
    private int countOfDays;
    private double price;

    public Trip(String destination, int countOfDays, double price){
        this.destination = destination;
        this.countOfDays = countOfDays;
        this.price = price;
    }

    public String Destination(){
        return this.destination;
    }

    public void SetDestination(String destination){
        this.destination = destination;
    }

    public int CountOfDays(){
        return this.countOfDays;
    }

    public void SetCountOfDays(int countOfDays){
        this.countOfDays = countOfDays;
    }

    public double Price(){
        return this.price;
    }

    public void SetPrice(double price){
        this.price = price;
    }

    public abstract double FixPrice();
}