public class OuterInnerDemo {
    public void display() {
        System.out.println("Outer display method");
    }

    public class Inner {
        public void display() {
            System.out.println("Inner display method");
        }
    }

    public static void main(String[] args) {
        OuterInnerDemo outer = new OuterInnerDemo();
        outer.display();
        OuterInnerDemo.Inner inner = outer.new Inner();
        inner.display();
    }
}
