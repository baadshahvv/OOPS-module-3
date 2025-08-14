#include <iostream>
using namespace std;

int globalVar = 10;

void showLocal() {
    int localVar = 5;
    cout << "Inside function, localVar = " << localVar << "\n";
    cout << "Inside function, globalVar = " << globalVar << "\n";
}

main() {
    cout << "In main, globalVar = " << globalVar << "\n";
    showLocal();
}
