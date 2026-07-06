public class Box3DDemo {
    public static void main(String[] args) {
        Box3D box = new Box3D(3, 4, 5);
        System.out.println("Area: " + box.area());
        System.out.println("Volume: " + box.volume());
    }
}
