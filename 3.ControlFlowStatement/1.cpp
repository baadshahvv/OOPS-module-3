#include <iostream>
using namespace std;

main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A\n";
    else if (marks >= 75)
        cout << "Grade: B\n";
    else if (marks >= 60)
        cout << "Grade: C\n";
    else if (marks >= 40)
        cout << "Grade: D\n";
    else
        cout << "Grade: F\n";

    return 0;
}
