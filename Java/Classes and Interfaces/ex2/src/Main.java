public class Main {
    public static void main(String[] args)
    {
        Excursion excursion = new Excursion("RandomDestination", 5, 1000, 2);
        System.out.println(excursion.FixPrice());

        Rest rest = new Rest("RandomDestination", 5, 1000, "HotelName");
        System.out.println(rest.FixPrice());
    }
}