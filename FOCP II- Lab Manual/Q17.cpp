#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    int digits = 0;
    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    // Compute (digit ^ digits) manually
    while (temp != 0) {
        int d = temp % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * d;   // d^digits without pow()
        }
        sum += power;
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}
