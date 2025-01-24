interface ISolid {
    public double volume();
}

interface ISurface {
    public double area();
}

interface IConstants {
    double PI = 22 / 7.0;
}

class Cube implements ISolid, ISurface {
    private double s;

    Cube(double s) {
        this.s = s;
    }

    public double volume() {
        return s * s * s;
    }

    public double area() {
        return 6 * s * s;
    }
}

class Box implements ISolid, ISurface {
    private double l, b, h;

    Box(double l, double b, double h) {
        this.l = l;
        this.b = b;
        this.h = h;
    }

    public double volume() {
        return l * b * h;
    }

    public double area() {
        return 2 * (l * b + b * h + l * h);
    }
}

class Pyramid implements ISolid {
    private double l, w, h;

    Pyramid(double l, double w, double h) {
        this.l = l;
        this.w = w;
        this.h = h;
    }

    public double volume() {
        return l * w * h / 3;
    }
}

class Sphere implements ISolid, ISurface, IConstants {
    private double r;

    Sphere(double r) {
        this.r = r;
    }

    public double volume() {
        return 4 / 3 * PI * r * r * r;
    }

    public double area() {
        return 4 * PI * r * r;
    }
}

class Rectangle implements ISurface {
    private double l, b;

    Rectangle(double l, double b) {
        this.b = b;
        this.l = l;
    }

    public double area() {
        return l * b;
    }
}

class Circle implements ISurface, IConstants {
    private double r;

    Circle(double r) {
        this.r = r;
    }

    public double area() {
        return PI * r * r;
    }
}

class Triangle implements ISurface {
    private double b, h;

    Triangle(double b, double h) {
        this.b = b;
        this.h = h;
    }

    public double area() {
        return 0.5 * b * h;
    }
}

public class Shape {
    public static void main(String[] args) {
        Cube cube = new Cube(2);
        Rectangle rect = new Rectangle(3, 4);
        Sphere sph = new Sphere(5);
        Circle cir = new Circle(7);
        Box box = new Box(5, 1, 2);
        Triangle tr = new Triangle(3, 4);
        Pyramid pyr = new Pyramid(5, 3, 8);

        System.out.println("Cube Volume      : " + cube.volume());
        System.out.println("Cube Area        : " + cube.area());
        System.out.println("Rectangle Area   : " + rect.area());
        System.out.println("Sphere Volume    : " + sph.volume());
        System.out.println("Sphere Area      : " + sph.area());
        System.out.println("Circle Area      : " + cir.area());
        System.out.println("Box Volume       : " + box.volume());
        System.out.println("Box Area         : " + box.area());
        System.out.println("Triangle Area    : " + tr.area());
        System.out.println("Pyramid Volume   : " + pyr.volume());
    }
}