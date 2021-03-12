import java.util.ArrayList;
import java.util.List;

public class PlainPizza {
	protected List<String> toppings = null;
	
	public PlainPizza() {
		this.toppings = new ArrayList<>();
	}

	public List<String> getToppings() {
		return toppings;
	}

	public void setToppings(List<String> toppings) {
		this.toppings = toppings;
	}
	
}
