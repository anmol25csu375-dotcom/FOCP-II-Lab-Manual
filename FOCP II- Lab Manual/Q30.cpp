#include <iostream>
using namespace std;

int main() {
    float salary[10];
    float total = 0.0;
    float average;

    cout << "Enter salary of 10 employees: ";
    for (int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }

    average = total / 10.0;

    cout << "Total salary = " << total << endl;
    cout << "Average salary = " << average << endl;

    return 0;
}
