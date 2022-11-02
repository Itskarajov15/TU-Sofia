public class Main {
    public static void main(String[] args)
    {
        Car car = new Car(300, "Mercedes", 100000, 6.3);
        Hovercraft hovercraft = new Hovercraft(300, "HovercraftModel", 300000, 100);
        Ship ship = new Ship(100, "ShipModel", 1000000, 20000);

        System.out.println(car.checkPromo());
        System.out.println(hovercraft.checkPromo());
        System.out.println(ship.checkPromo());

        car.enterLand();
        hovercraft.enterLand();
        ship.enterSea();
    }
}