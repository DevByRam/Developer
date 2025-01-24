#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Shape
{
private:
    string name;
    int numSides;
    int side1, side2, side3;
    double radius;

public:
    Shape(int a, int b, int c)
    {
        name = "Triangle";
        numSides = 3;
        side1 = a;
        side2 = b;
        side3 = c;
        radius = 0;
    }

    Shape(int length, int breadth)
    {
        name = "Rectangle";
        numSides = 4;
        side1 = length;
        side2 = breadth;
        side3 = 0;
        radius = 0;
    }

    Shape(int side)
    {
        name = "Square";
        numSides = 4;
        side1 = side;
        side2 = 0;
        side3 = 0;
        radius = 0;
    }

    Shape(double r)
    {
        name = "Circle";
        numSides = 0;
        radius = r;
        side1 = side2 = side3 = 0;
    }

    double calculateArea()
    {
        if (name == "Triangle")
        {
            double s = (side1 + side2 + side3) / 2.0;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
        else if (name == "Rectangle")
        {
            return side1 * side2;
        }
        else if (name == "Square")
        {
            return side1 * side1;
        }
        else if (name == "Circle")
        {
            return M_PI * radius * radius;
        }
        return 0;
    }

    void display()
    {
        cout << "Shape: " << name << endl;
        cout << "Number of Sides: " << numSides << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    Shape triangle(3, 4, 5);
    Shape rectangle(4, 6);
    Shape square(4);
    Shape circle(5.5, true);

    cout << "Triangle details:" << endl;
    triangle.display();

    cout << "\nRectangle details:" << endl;
    rectangle.display();

    cout << "\nSquare details:" << endl;
    square.display();

    cout << "\nCircle details:" << endl;
    circle.display();

    return 0;
}
