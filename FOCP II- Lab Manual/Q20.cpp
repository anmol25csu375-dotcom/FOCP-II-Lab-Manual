#include <iostream>
using namespace std;

int main() {
    // 3 rows
    for (int row = 1; row <= 3; row++) {
        // numbers 1 to 5 in each row
        for (int col = 1; col <= 5; col++) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
