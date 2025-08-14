#include <iostream>
using namespace std;

class Rectangle {
    float l, w;
public:
    void getDimensions() {
        cout << "Enter length and width: ";
        cin >> l >> w;
    }
    void displayArea() {
        cout << "Area: " << l * w;
    }
};

main() {
    Rectangle r;
    r.getDimensions();
    r.displayArea();
}
