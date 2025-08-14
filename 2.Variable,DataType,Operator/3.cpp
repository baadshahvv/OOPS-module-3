#include <iostream>
using namespace std;

main() {
    int a = 10, b = 3;

    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n";
    cout << "a % b = " << a % b << "\n";

    cout << "\nRelational Operators:\n";
    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a > b: " << (a > b) << "\n";
    cout << "a < b: " << (a < b) << "\n";
    cout << "a >= b: " << (a >= b) << "\n";
    cout << "a <= b: " << (a <= b) << "\n";

    cout << "\nLogical Operators:\n";
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << "\n";
    cout << "(a > 5 || b > 5): " << (a > 5 || b > 5) << "\n";
    cout << "!(a > b): " << !(a > b) << "\n";

    cout << "\nBitwise Operators:\n";
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n";

    return 0;
}
