public class Q21 {
    public static void main(String args[]) {
        Thread1 t1 = new Thread1();
        Thread1 t2 = new Thread1();
        Thread1 t3 = new Thread1();

        // Display the priority of above threads
        // using getPriority() method
        System.out.println("t1 thread priority: " + t1.getPriority());
        System.out.println("t2 thread priority: " + t2.getPriority());
        System.out.println("t3 thread priority: " + t3.getPriority());

        // passing integer arguments
        t1.setPriority(2);
        t2.setPriority(5);
        t3.setPriority(8);

        // t3.setPriority(21); // Error as priority must be from 1 to 10

        // Last Execution as the Priority is low
        System.out.println("t1 thread priority: " + t1.getPriority());

        // Will be executed before t1 and after t3
        System.out.println("t2 thread priority: " + t2.getPriority());

        // First Execution as the Priority is High
        System.out.println("t3 thread priority: " + t3.getPriority());

        t1.start(); // invoke run method of thread and performs all taks in the method
        t2.start();
        t3.start();
    }
}
class Thread1 extends Thread {
    public void run() {
        System.out.println(Thread.currentThread().getName() + " is running with priority " + Thread.currentThread().getPriority());
    }
}