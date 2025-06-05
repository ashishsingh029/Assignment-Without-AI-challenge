public class Q01 {
    public static void main(String args[]) {
        int n = args.length;
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum = sum + Integer.parseInt(args[i]);
        }
        System.out.println("Sum = " + sum);
    }
}