import java.util.Dictionary;
import java.util.Hashtable;

public class SickPatient extends Patient {
    private Dictionary<String, Double> epicrise;
    private String status;

    public SickPatient(String name, String address, String egn, String status)
    {
        super(name, address, egn);
        this.epicrise = new Hashtable<String, Double>();
        this.status = status;
    }

    public String Status(){
        return this.status;
    }

    public void SetStatus(String status){
        this.status = status;
    }

    public void Cure(String cure, Double dose) {
        this.epicrise.put(cure, dose);
    }
}