public class NumberPrinter {
    private int num = 1;
    private final int MAX = 10;
    private boolean isOddTurn = true;

    public synchronized void printOdd() {
        while(num <= MAX) {
            while(!isOddTurn) {
                try {
                    wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("odd thread: " + num);
            num++;
            isOddTurn = false;
            notify();
        }
    }

    public synchronized void printEven() {
        while(num <= MAX) {
            while(isOddTurn) {
                try{
                    wait();
                } catch(InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("even thread: " + num);
            num++;
            isOddTurn = true;
            notify();
        }
    }
}

    class Printer extends Thread {
        NumberPrinter obj;
        boolean isOddThread;
        Printer(NumberPrinter obj, boolean isOddThread) {
            this.obj = obj;
            this.isOddThread = isOddThread;
        }

        public void run() {
            if(isOddThread) {
                obj.printOdd();
            } else {
                obj.printEven();
            }
        }
        public static void main(String[] args) {
            NumberPrinter np = new NumberPrinter();
            Printer p1 = new Printer(np, true);
            Printer p2 = new Printer(np, false);
            p1.start();
            p2.start();
        }
    }

