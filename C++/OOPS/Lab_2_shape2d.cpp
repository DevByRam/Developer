#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    void setCoordinates(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    void display() {
        cout << "(" << x << "," << y << ")";
    }

    double distanceTo(Point other) {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

class Shape2D {
private:
    Point vertices[10];
    int n;

public:
    Shape2D(int numVertices) {
        if (numVertices > 10) {
            cout << "Error: Maximum number of vertices is 10." << endl;
            n = 0;
        } else {
            n = numVertices;
        }
    }

    void setVertex(int index, double x, double y) {
        if (index >= 0 && index < n) {
            vertices[index].setCoordinates(x, y);
        } else {
            cout << "Error: Invalid vertex index." << endl;
        }
    }

    double calculatePerimeter() {
        double perimeter = 0;
        for (int i = 0; i < n; ++i) {
            int nextIndex = (i + 1) % n;
            perimeter += vertices[i].distanceTo(vertices[nextIndex]);
        }
        return perimeter;
    }

    void displayVertices() {
        for (int i = 0; i < n; ++i) {
            vertices[i].display();
            if (i != n - 1) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
};

int main() {
    int numVertices;
    cout << "Enter the number of vertices (max 10): ";
    cin >> numVertices;

    Shape2D polygon(numVertices);

    for (int i = 0; i < numVertices; ++i) {
        double x, y;
        cout << "Enter coordinates for vertex " << i + 1 << " (x y): ";
        cin >> x >> y;
        polygon.setVertex(i, x, y);
    }

    cout << "\nThe vertices of the polygon are: ";
    polygon.displayVertices();

    double perimeter = polygon.calculatePerimeter();
    cout << "The perimeter of the polygon is: " << perimeter << endl;

    return 0;
}
