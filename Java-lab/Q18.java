import java.util.Scanner;
public class Q18 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter numerator: ");
        double nr = in.nextDouble();
        System.out.print("Enter denominator: ");
        double dr = in.nextDouble();
        try {
            if(dr == 0) {
                throw new ArithmeticException("Unable to divide by zero");
            }
            double result = nr / dr;
            System.out.println("Result = " + result);
        } catch (ArithmeticException ae) {
            System.out.println("Exception caught in catch block");
            System.out.println(ae);
        }
    }
}