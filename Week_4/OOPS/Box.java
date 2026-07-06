public class Box {
    protected int length;
    protected int breadth;

    public Box() {
        this.length = 0;
        this.breadth = 0;
    }

    public Box(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public void setDimensions(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public int area() {
        return length * breadth;
    }
}
