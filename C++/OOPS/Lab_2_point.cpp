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

int main() {
    Point p1, p2;

    p1.setCoordinates(3, 4);
    p2.setCoordinates(6, 8);

    cout << "Point 1: ";
    p1.display();
    cout << "\nPoint 2: ";
    p2.display();

    double distance = p1.distanceTo(p2);
    cout << "\nDistance between Point 1 and Point 2: " << distance << endl;

    return 0;
}
