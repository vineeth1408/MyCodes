/*  Write a Program using Threads to simulate a traffic light. The Signal lights should glow
after each 10 second, one by one. For example: Firstly Red, then after 10 seconds, red
will be put to off and yellow will start glowing and then accordingly green.*/
class TrafficLight extends Thread {
    private String[] lightColor = {"RED", "YELLOW", "GREEN"};
    private volatile int colorPos = 0;

    public void run() {
        glow();
    }

    void glow() {
        while (true) {
            try {
                System.out.println(lightColor[colorPos]);
                colorPos = (colorPos+1)%3;
                Thread.sleep(10000);
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }
    }
}
public class Week9_3 {
    public static void main(String[] args) throws InterruptedException {
        TrafficLight trafficLight = new TrafficLight();
        trafficLight.start();
        trafficLight.join();
    }
}