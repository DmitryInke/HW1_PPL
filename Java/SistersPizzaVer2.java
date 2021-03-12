public class SistersPizza extends PlainPizza implements OlivesMixin  {
	
	@Override
	public void addOlives() {
		System.out.println("Adding olives!");
		toppings.add("olives");
	}
	
	public void preparePizza() {
		addOlives();
	}
}
