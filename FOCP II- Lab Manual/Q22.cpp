#include <iostream>
using namespace std;

int main() {
    int n = 4;          // half height (middle row index); total rows = 2*n - 1

    // upper part including middle row
    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // first star
        cout << "*";

        if (i > 1) {
            // inner spaces between the two stars
            int innerSpaces = 2 * i - 3;
            for (int s = 1; s <= innerSpaces; s++) {
                cout << " ";
            }
            // second star
            cout << "*";
        }

        cout << endl;
    }

    // lower part
    for (int i = n - 1; i >= 1; i--) {
        // leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // first star
        cout << "*";

        if (i > 1) {
            // inner spaces between the two stars
            int innerSpaces = 2 * i - 3;
            for (int s = 1; s <= innerSpaces; s++) {
                cout << " ";
            }
            // second star
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
