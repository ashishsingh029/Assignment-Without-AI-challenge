public class Q03 {
    public static void main(String args[]) {
        int []a = new int[30];
        a[29] = 5;
        System.out.println("a[" + 29 + "] = " + a[29]);
        System.out.println("Length of array: " + a.length);
        a = new int[40];
        a[30] = 51;
        System.out.println("a[" + 30 + "] = " + a[30]);
        System.out.println("New Length of array: " + a.length);
    }
}