#include <iostream>
using namespace std;

main() {
    int a = 10;
    double b = 3.5;

    double implicitResult = a + b;        // implicit conversion (int → double)
    int explicitResult = (int)b + a;      // explicit conversion using cast

    cout << "Implicit conversion result: " << implicitResult << endl;
    cout << "Explicit conversion result: " << explicitResult << endl;

    return 0;
}
