public class Q13 {
    public static void main(String[] args) {
        System.out.println(MyMath.max(15, 1 , 13, 7, 9));
        System.out.println(MyMath.max(15, 10, 16));
    }
}
class MyMath {
    static int max(int ...arr) {
        int max = arr[0];
        for(int i=1;i<arr.length;i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
}