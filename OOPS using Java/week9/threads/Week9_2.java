/*Write a program where the consumr thread checks the data production status [ is
over or not ] for every 10 ms. */
import java.util.LinkedList;

class Producer extends Thread {
    public void run() {
        produce();
    }

    void produce() {
        while (true) {
            try {
                Thread.sleep(40);
                Week9_2.item = true;
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }
    }
}

class Consumer extends Thread {
    public void run() {
        consume();
    }

    void consume() {
        while (true) {
            try {
                if (!Week9_2.item) {
                    System.out.println("Production status: in progress"); 
                } else {
                    System.out.println("Production status: produced");
                    Week9_2.item = false;
                }
                Thread.sleep(10);
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }
    }
}

public class Week9_2 {
    public static boolean item = false;

    public static void main(String[] args) throws InterruptedException {
        Producer producer = new Producer();
        Consumer consumer = new Consumer();
        System.out.println("Assuming it takes 40ms to produce product and \nConsumer checks every 10ms for production status.");
        producer.start();
        consumer.start();
        producer.join();
        consumer.join();
    }
}