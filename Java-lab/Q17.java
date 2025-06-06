import PackageQ17.ClassInAnotherPackage;
public class Q17 {
    private static int a = 5;
    static int b = 7; // default 
    protected static int c = 6;
    public static int d = 8;
    public static void main(String args[]) {

        ClassWithinPackage ob2 = new ClassWithinPackage();

        System.out.println("Within Class -> All Accessible");
        System.out.println("private a = " + a);
        System.out.println("default b = " + b);
        System.out.println("protected c = " + c);
        System.out.println("public d = " + d);
        System.out.println("");

        System.out.println("Another Class Within Package -> private inaccessible; default, protected, public accessible");
        // System.out.println("private a = " + ob2.a); // private not accessible
        System.out.println("default b = " + ob2.b);
        System.out.println("protected c = " + ob2.c);
        System.out.println("public d = " + ob2.d);
        System.out.println("");

        System.out.println("Class in Other Package -> private, default, protected inaccessible; public accessible");
        ClassInAnotherPackage ob3 = new ClassInAnotherPackage();
        // System.out.println("private a = " + ob3.a); 
        // System.out.println("default b = " + ob3.b);
        // System.out.println("protected c = " + ob3.c);
        System.out.println("public d = " + ob3.d);
        System.out.println("");

        System.out.println("Class in Same Package extending class in Another Package -> private, default inaccessible;  protected accessible only within the subclass; public accessible");
        ClassWithinPackageExtendingClassFromAnotherPackage ob4 = new ClassWithinPackageExtendingClassFromAnotherPackage();
        // System.out.println("private a = " + ob3.a); 
        // System.out.println("default b = " + ob3.b);
        // System.out.println("protected c = " + ob4.c); // protected not accessible here, but within the members of the ClassWithinPackageExtendingClassFromAnotherPackage, for e.g. used in constructor 
        System.out.println("public d = " + ob4.d);
        System.out.println("");
    }
}
class ClassWithinPackage {
    private int a = 5;
    int b = 7; // default 
    protected int c = 6;
    public int d = 8;
}
class ClassWithinPackageExtendingClassFromAnotherPackage extends ClassInAnotherPackage {
    ClassWithinPackageExtendingClassFromAnotherPackage() {
        System.out.println("protected c = " + this.c); // we can use getters and setters too
    }
}