public class Ship extends Vehicle implements IsSeaVessel{
    private double deadWeight;

    public Ship(int maxSpeed, String model, double price, double deadWeight) {
        super(maxSpeed, model, price);
        this.deadWeight = deadWeight;
    }

    public double DeadWeight(){
        return this.deadWeight;
    }

    public void SetDeadWeight(double deadWeight){
        this.deadWeight = deadWeight;
    }

    public double checkPromo(){
        return this.Price() - (0.3 * this.Price()) / 100;
    }

    public void enterSea(){
        System.out.println("Enter Sea");
    }
}