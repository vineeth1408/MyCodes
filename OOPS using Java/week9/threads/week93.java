class TrafficLights extends Thread{
	private String[] LightColor = {"YELLOW","RED","GREEN"};
	public int value=0;
	public void run(){
		System.out.println("GLOW METHOD IS CALLED");
		glow();
	}
	void glow(){

		while(true){
			value=0;
			System.out.println(LightColor[value]);
			try{
				Thread.sleep(10000);
			}
			catch (Exception e){
				System.out.println(e);
			}
			value++;
			System.out.println(LightColor[value]);

			try{
				Thread.sleep(10000);
			}
			catch (Exception e){
				System.out.println(e);
			}
			value++;
			System.out.println(LightColor[value]);

			try{
				Thread.sleep(10000);
			}
			catch (Exception e){
				System.out.println(e);
			}
			
		}
	}
}

public class week93{
	public static void main(String[] args) {
		TrafficLights obj = new TrafficLights();
		obj.start();

	}
}