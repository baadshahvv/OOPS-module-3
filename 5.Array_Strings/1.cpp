#include <iostream>
using namespace std;

main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    double avg = double(sum) / n;
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << avg << "\n";
}
