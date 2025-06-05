import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        double ft, ih;
        Distance d1, d2, d3;
        System.out.println("Enter first Distance:");
        System.out.print("Enter Ft.: ");
        ft = in.nextDouble();
        System.out.print("Enter In.: ");
        ih = in.nextDouble();
        d1 = new Distance(ft, ih);
        Distance dk = new Distance(ft+1, ih+1);
        d2 = dk;
        d3 = new Distance(d1);
        System.out.println("Distance D1: " + d1.ft + "' " + d1.in + "\"");
        System.out.println("Distance D2: " + d2.ft + "' " + d2.in + "\"");
        System.out.println("Distance D3: " + d3.ft + "' " + d3.in + "\"");
    }
}
class Distance {
    double ft;
    double in;
    Distance() {}
    Distance(double ft, double in) {
        this.ft = ft;
        this.in = in;
    }
    Distance(Distance that) {
        this.ft = that.ft;
        this.in = that.in;
    }

}