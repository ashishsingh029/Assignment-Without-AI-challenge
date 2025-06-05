import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        double ft, inch;
        Distance d1 = new Distance();
        Distance d2 = new Distance();
        System.out.println("Enter first Distance:");
        System.out.print("Enter Ft.: ");
        d1.ft = in.nextDouble();
        System.out.print("Enter In.: ");
        d1.in = in.nextDouble();
        System.out.println("Enter second Distance:");
        System.out.print("Enter Ft.: ");
        d2.ft = in.nextDouble();
        System.out.print("Enter In.: ");
        d2.in = in.nextDouble();
        System.out.println("Distance D1: " + d1.ft + "' " + d1.in + "\"");
        System.out.println("Distance D2: " + d2.ft + "' " + d2.in + "\"");
    }
}
class Distance {
    double ft;
    double in;
}