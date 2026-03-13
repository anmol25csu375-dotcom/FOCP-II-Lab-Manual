#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // leading spaces for triangle shape
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }

        int val = 1;  // first value in each row is 1

        for (int j = 0; j <= i; j++) {
            cout << val << " ";

            // next value using iterative formula:
            // C(i, j+1) = C(i, j) * (i - j) / (j + 1)
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
