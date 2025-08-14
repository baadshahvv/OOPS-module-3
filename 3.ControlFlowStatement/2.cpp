#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (1-100): ";

    while (true) {
        cin >> guess;
        if (guess == secret) {
            cout << "Correct! The number was " << secret << "\n";
            break;
        } else if (guess > secret) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Too low! Try again: ";
        }
    }

    return 0;
}
