#include <iostream>
using namespace std;

int main() {
    float temp[30];
    cout << "Enter temperatures for 30 days: ";

    for (int i = 0; i < 30; i++) {
        cin >> temp[i];
    }

    float minTemp = temp[0];

    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }

    cout << "Minimum temperature for the month = " << minTemp << endl;

    return 0;
}
