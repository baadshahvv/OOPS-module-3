#include <iostream>
using namespace std;

main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    bool palindrome = true;
    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-1-i]) {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
        cout << "Palindrome\n";
    else
        cout << "Not a palindrome\n";
}
