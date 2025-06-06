public class Q19 {
    // Main method
    public static void main(String args[]) {
        try {
            int []a = { 1, 2, 3, 4, 5 };
            // System.out.println(a[10]); // First exception 

            System.out.println(a[4]); 
            // Inner try block (try-block2)
            try {
                int x = a[2] / 0; // This will throw ArithmeticException
            } catch (ArithmeticException e2) {
                System.out.println("Division by zero is not possible");
            }
        } catch (ArrayIndexOutOfBoundsException e1) {
            System.out.println("ArrayIndexOutOfBoundsException");
            System.out.println("Element at such index does not exist");
        }
    }
}