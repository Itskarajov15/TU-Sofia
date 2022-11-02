public class Excursion extends Trip implements CountOfNights{
    private int countOfHotels;

    public Excursion(String destination, int countOfDays, double price, int countOfHotels){
        super(destination, countOfDays, price);
        this.countOfHotels = countOfHotels;
    }

    public int CountOfHotels(){
        return this.countOfHotels;
    }

    public void SetCountOfHotels(int countOfHotels){
        this.countOfHotels = countOfHotels;
    }

    public double FixPrice() {
        return this.Price() + (this.Price() * 10) / 100;
    }

    public int CountOfNights() {
        return this.CountOfDays() - 1;
    }
}