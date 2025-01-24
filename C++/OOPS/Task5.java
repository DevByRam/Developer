import java.util.Scanner;

public class Task5 {
    final static double PI = 22 / 7.0;

    static double area(float r) {
        return PI * r * r;
    }

    static int area(int s) {
        return s * s;
    }

    static int area(int l, int b) {
        return l * b;
    }

    static double area(double b, double h) {
        return b * h / 2.0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Menu - ");
        System.out.println("1 - Area of Circle");
        System.out.println("2 - Area of Sqaure");
        System.out.println("3 - Area of Rectangle");
        System.out.println("4 - Area of Triangle");
        System.out.print("Enter your choice : ");
        int ch = sc.nextInt();
        switch (ch) {
            case 1:
                System.out.print("Enter radius : ");
                float r = sc.nextFloat();
                System.out.println("Area : " + area(r));
                break;
            case 2:
                System.out.println("Enter length of side : ");
                int s = sc.nextInt();
                System.out.println("Area : " + area(s));
                break;
            case 3:
                System.out.println("Enter length : ");
                int l = sc.nextInt();
                System.out.println("Enter breadth : ");
                int b = sc.nextInt();
                System.out.println("Area : " + area(l, b));
                break;
            case 4:
                System.out.println("Enter heigth : ");
                double h = sc.nextDouble();
                System.out.println("Enter lengtht of base : ");
                double base = sc.nextDouble();
                System.out.println("Area : " + area(base, h));
                break;
            default:
                System.out.println("Invalid Choice");
                break;
        }
        sc.close();
    }
}