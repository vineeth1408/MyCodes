package Collections;
import java.util.Set;
import java.util.HashMap;
import java.util.Map;
import java.util.Map;
public class MapDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Map<String,String> map = new HashMap<>(); // Map map = new HashMap(); for need of generic 
		map.put("Name", "Vineeth");
		map.put("Company","Epam");
		map.put("Purpose", "Interview");
		map.put("Purpose", "Interview");
		// we cannot have same keys but we can repeat values
		System.out.println(map);
		System.out.println(map.get("Name")); // get method to get values using keys
		System.out.println(map.keySet()); // keys printing
		
		Set<String> keys = map.keySet();
		for(String key : keys) {
			System.out.println(key + " "+ map.get(key));
		}
		
		// using map interface
		Set<Map.Entry<String, String>> val = map.entrySet();
		for(Map.Entry<String, String> e: val)
		{
			System.out.println(e.getKey()+" : "+e.getValue());
		}
		
	}

}
