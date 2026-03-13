#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {   // no sqrt(), just i*i <= n
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lower, upper;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
