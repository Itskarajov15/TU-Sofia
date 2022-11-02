public class Rest extends Trip{
    private String hotelName;

    public Rest(String destination, int countOfDays, double price, String hotelName){
        super(destination, countOfDays, price);
        this.hotelName = hotelName;
    }

    public String HotelName(){
        return this.hotelName;
    }

    public void SetHotelName(String hotelName){
        this.hotelName = hotelName;
    }

    public double FixPrice() {
        return this.Price() + (this.Price() * 40) / 100;
    }
}
