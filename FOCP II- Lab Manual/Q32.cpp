#include <iostream>
using namespace std;

int main() {
    int a[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = a[0];

    // initialize largest and secondLargest properly
    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    cout << "Largest number = " << largest << endl;
    cout << "Second largest number = " << secondLargest << endl;

    return 0;
}
