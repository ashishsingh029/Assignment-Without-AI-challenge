public class Q11 {
    public static void main(String args[]) {
        Gun gun = new Gun();
        gun.fire();
        gun.fire(9);
    }
}
class Gun {
    void fire() {
        System.out.println("Firing without any ammo");
    }
    void fire(float ammo) {
        System.out.println("Firing with " + ammo + " mm ammo");
    }
}