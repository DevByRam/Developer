#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setData(int l, int w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Invalid dimensions" << endl;
        }
    }
    int area() const {
        return length * width;
    }
    int perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r1;
    int l, b;

    cout << "Enter length and width: ";
    cin >> l >> b;

    r1.setData(l, b);

    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}
