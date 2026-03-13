#include <iostream>
using namespace std;

int main() {
    int n = 4;   // size of each wing

    // upper half
    for (int i = 1; i <= n; i++) {
        // left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces between wings
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for (int i = n; i >= 1; i--) {
        // left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces between wings
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
