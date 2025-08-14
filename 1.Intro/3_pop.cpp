#include <iostream>
using namespace std;

float calculateArea(float l, float w) {
    return l * w;
}

main() {
    float l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Area: " << calculateArea(l, w);
}
