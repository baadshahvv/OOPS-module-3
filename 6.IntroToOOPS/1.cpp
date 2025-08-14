#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return a / b; }
};

main() {
    Calculator calc;
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Addition: " << calc.add(x, y) << "\n";
    cout << "Subtraction: " << calc.subtract(x, y) << "\n";
    cout << "Multiplication: " << calc.multiply(x, y) << "\n";
    cout << "Division: " << calc.divide(x, y) << "\n";
}
