import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);       
        System.out.print("Enter any integer: ");
        int num = in.nextInt();
        boolean isPrime = true;
        for(int i=2;i*i<=num;i++) {
            if(num%i == 0) {
                isPrime = false;
                break;
            }
        }
        System.out.println(num + " is " + (isPrime ? "prime" : "not prime"));
    }
}