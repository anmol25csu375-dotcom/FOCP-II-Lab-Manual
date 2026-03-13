#include <iostream>
using namespace std;

int main() {
    int a[5];
    int count = 0;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            count++;
        }
    }

    cout << "Numbers divisible by both 3 and 5 = " << count << endl;

    return 0;
}
