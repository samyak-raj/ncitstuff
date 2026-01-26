public class MultiThreadingExample extends Thread{
    public void run() {
        for (int i = 1; i < 11; i++) {
            System.out.println(i);
            try {
                Thread.sleep(2000);
            } catch(Exception e) {

            }
        }
    }

    public static void main(String[] args) {
        MultiThreadingExample one = new MultiThreadingExample();
        MultiThreadingExample two = new MultiThreadingExample();
        one.start();
        two.start();
    }
}
