#include <iostream>
using namespace std;

int main() {
    int a[5];
    int sumEven = 0, sumOdd = 0;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            sumEven += a[i];
        else
            sumOdd += a[i];
    }

    cout << "Sum of even numbers = " << sumEven << endl;
    cout << "Sum of odd numbers  = " << sumOdd << endl;

    return 0;
}
