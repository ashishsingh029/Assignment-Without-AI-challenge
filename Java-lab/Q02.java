public class Q02 {
    public static void main(String args[]) {
        int num = 5;
        int ans = 1;
        for(int i=1;i<=num;i++) {
            ans *= i;
        }
        System.out.println("Factorial of " + num + " = " + ans);
    }
}