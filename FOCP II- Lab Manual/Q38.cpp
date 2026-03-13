#include <iostream>
using namespace std;

int main() {
    char password[100];

    cout << "Enter password: ";
    cin.getline(password, 100);

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; password[i] != '\0'; i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (ch == '@' || ch == '#' || ch == '$' ||
                 ch == '%' || ch == '!' || ch == '&' || ch == '*')
            hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Valid password." << endl;
    else {
        cout << "Invalid password. It must contain at least:" << endl;
        cout << "1 uppercase, 1 lowercase, 1 digit, 1 special (@ # $ % ! & *)." << endl;
    }

    return 0;
}
