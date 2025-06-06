public class Main {
    public static void main(String args[]) {
        ProducerConsumerMultiThread producerConsumerMultiThread = new ProducerConsumerMultiThread();
        Thread producerThread = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    producerConsumerMultiThread.produce();
                } catch (InterruptedException interruptedException) {
                    System.out.println("Error in Thread: " + interruptedException);
                }
            }
        }, "Producer Thread");
        Thread consumerThread = new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    producerConsumerMultiThread.consume();
                } catch (InterruptedException interruptedException) {
                    System.out.println("Error in Thread: " + interruptedException);
                }
            } 
        }, "Consumer Thread");
        producerThread.start();
        consumerThread.start();
        try {
            producerThread.join();
            consumerThread.join();
        } catch (InterruptedException interruptedException) {
            System.out.println("Error in Thread: " + interruptedException);
        }
    }
}
class ProducerConsumerMultiThread {
    boolean []buffer;
    int curr;
    ProducerConsumerMultiThread() {
        buffer = new boolean[5];
        int curr = -1;
    }
    ProducerConsumerMultiThread(int n) {
        curr = -1;
        buffer = new boolean[n];
    }
    void produce() throws InterruptedException {
        while(true) {
            synchronized(this) {
                if(curr == buffer.length - 1) {
                    wait(); // wait and notify must be called after achieving the lock of the object
                }
                this.curr++;
                buffer[this.curr] = true;
                System.out.println(Thread.currentThread().getName() + " is producing");
                notify();
            }
            Thread.sleep(1000);
        }
    }
    void consume() throws InterruptedException {
        while(true) {
            synchronized(this) {
                if(curr == -1) {
                    wait(); 
                }
                buffer[this.curr--] = false;
                System.out.println(Thread.currentThread().getName() + " is consuming");
                notify();
            }
            Thread.sleep(500);
        }
    }
}