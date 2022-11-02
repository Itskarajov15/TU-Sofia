public class Car extends Vehicle implements IsLandVehicle{
    private double power;

    public Car(int maxSpeed, String model, double price, double power) {
        super(maxSpeed, model, price);
        this.power = power;
    }

    public double Power(){
        return this.power;
    }

    public void SetPower(double power){
        this.power = power;
    }

    public double checkPromo()
    {
        return this.Price() - (20 * this.Price()) / 100;
    }

    public void enterLand(){
        System.out.println("Enter Land");
    };
}