public abstract class Patient {
    private String name;
    private String address;
    private String egn;

    public Patient(String name, String address, String egn){
        this.name = name;
        this.address = address;
        this.egn = egn;
    }

    public String Name(){
        return this.name;
    }

    public void SetName(String name){
        this.name = name;
    }

    public String Address(){
        return this.address;
    }

    public void SetAddress(String address){
        this.address = address;
    }

    public String Egn(){
        return this.egn;
    }

    public void SetEgn(String egn){
        this.egn = egn;
    }

    public abstract void Cure(String cure, Double dose);
}