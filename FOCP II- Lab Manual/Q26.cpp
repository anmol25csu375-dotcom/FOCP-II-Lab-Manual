#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 5.0f);   // assuming each subject is out of 100

    cout << "Total marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
