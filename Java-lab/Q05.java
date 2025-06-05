import java.util.Scanner;
public class Q05 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter any number: ");
        int num = in.nextInt();
        int temp = num;
        String binary = "";
        while(temp > 0) {
            int rem = temp%2;
            binary = rem + binary;
            temp /= 2;
        }
        System.out.println(num + " in binary = " + binary);
    }
}