public class Hovercraft extends Vehicle implements IsLandVehicle{
    private int countOfPassengers;

    public Hovercraft(int maxSpeed, String model, double price, int countOfPassengers) {
        super(maxSpeed, model, price);
        this.countOfPassengers = countOfPassengers;
    }
    public double checkPromo(){
        return this.Price() - (3 * this.Price()) / 100;
    }

    public void enterLand(){
        System.out.println("Enter Land");
    };
}