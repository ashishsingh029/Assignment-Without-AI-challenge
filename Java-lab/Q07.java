import java.util.Scanner;
public class Q07 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(args[0]);
        System.out.println("Enter " + n + " integers: ");
        int sum = 0;
        for(int i=0;i<n;i++) {
            int input = in.nextInt();
            sum += input;
        }
        System.out.println("Sum = " + sum);
    }
}