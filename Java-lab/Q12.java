public class Q12 {
    static void change(int x) {
        x = x + 1; 
    }
    static void changeObj(AcessModifiers ob) {
        ob.c = 7;
    }
    public static void main(String args[]) {
        AcessModifiers ob = new AcessModifiers();
        // System.out.println(ob.a); // error accessing private member
        // ob.b = 5; // error, tring to change final member
        System.out.println(ob.b);
        int x = 5;
        System.out.println("Initial value: " + x);
        change(x);
        System.out.println("Passing Primitive data type to change function");
        System.out.println("Modified value by function: " + x);

        System.out.println("Initial value of ob.c: " + ob.c);
        changeObj(ob);
        System.out.println("Passing Object to change function");
        System.out.println("Modified value of ob.c: " + ob.c);
    }
}
class AcessModifiers {
    private int a;
    public final int b;
    int c;
    AcessModifiers() {
        a = 5;
        b = 6;
        c = 4;
    }
    public int getA() {
        return a;
    }
}