package PackageQ16L2;
public class Fib {
    public static void generate() {
        int a = 0;
        int b = 1;
        System.out.print("0 1 ");
        for(int i=0;i<10;i++) {
            int sum = a+b;
            System.out.print(sum + " ");
            a = b;
            b = sum;
        }
        System.out.println("");
    }
}