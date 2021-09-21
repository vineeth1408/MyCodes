/*Write a program to create MyThread class with run() method and then attach a thread to
this MyThread class object.
 */
class MyThread extends Thread {
    public void run() {
        System.out.println("Running MyThread!");
    }
}

class Week9_1 {
    public static void main(String[] args) {
        MyThread myThread = new MyThread();
        myThread.start();
    }
}