#include <iostream>
using namespace std;

int main() {
    char username[100];

    cout << "Enter username: ";
    cin.getline(username, 100);

    bool valid = true;

    for (int i = 0; username[i] != '\0'; i++) {
        char ch = username[i];

        // check allowed ranges: A-Z, a-z, 0-9
        bool isUpper = (ch >= 'A' && ch <= 'Z');
        bool isLower = (ch >= 'a' && ch <= 'z');
        bool isDigit = (ch >= '0' && ch <= '9');

        if (!(isUpper || isLower || isDigit)) {
            valid = false;    // this includes space and special chars
            break;
        }
    }

    if (valid)
        cout << "Valid username." << endl;
    else
        cout << "Invalid username (no spaces or special characters allowed)." << endl;

    return 0;
}
