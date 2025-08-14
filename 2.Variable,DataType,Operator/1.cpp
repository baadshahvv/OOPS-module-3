#include <iostream>
using namespace std;

main() {
    const float PI = 3.14159;
    int age = 20;
    double salary = 45000.75;
    char grade = 'A';
    string name = "John";
    bool isEmployed = true;

    age += 5;
    salary += 2000;
    double circleArea = PI * 5 * 5;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Employed: " << isEmployed << endl;
    cout << "Circle Area (radius 5): " << circleArea << endl;

    return 0;
}
