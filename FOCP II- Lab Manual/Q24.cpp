#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {          // row 1 to 5
        char ch = 'A';                         // start from A every row
        for (int j = 1; j <= i; j++) {         // print first i letters
            cout << ch;
            ch++;                              // next letter
        }
        cout << endl;
    }

    return 0;
}
