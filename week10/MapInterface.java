import java.util.HashMap;
import java.util.Map;

public class MapInterface {
    public static void main(String[] args) {
        Map<String,Integer> obj=new HashMap<String,Integer>();
        obj.put("VYSHNAvi", 53);
        obj.put("VARENYA", 7);
        obj.put("CHAITANYA", 0);
        obj.put("DIVYA", 64);
        for(Map.Entry<String,Integer> m:obj.entrySet()){
            System.out.println(m.getKey()+" = "+m.getValue());
        }
    }
}
