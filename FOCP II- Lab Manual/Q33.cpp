#include <iostream>
using namespace std;

int main() {
    int marks[3][5];   // 3 students, 5 subjects each

    cout << "Enter marks of 3 students in 5 subjects:\n";
    for (int i = 0; i < 3; i++) {          // students
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {      // subjects
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // 2nd subject of 1st student -> [0][1]
    cout << "Marks in 2nd subject of 1st student = "
         << marks[0][1] << endl;

    // 5th subject of 3rd student -> [2][4]
    cout << "Marks in 5th subject of 3rd student = "
         << marks[2][4] << endl;

    return 0;
}
