#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!\n";
        return 0;
    }
}

main() {
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << add(num1, num2) << "\n"; break;
        case 2: cout << "Result: " << subtract(num1, num2) << "\n"; break;
        case 3: cout << "Result: " << multiply(num1, num2) << "\n"; break;
        case 4: cout << "Result: " << divide(num1, num2) << "\n"; break;
        default: cout << "Invalid choice\n";
    }

    return 0;
}
