#include <iostream>
using namespace std;

int main() {
    char id[100];
    cout << "Enter ID: ";
    cin >> id;      // assumes no spaces in ID

    int length = 0;

    // Find length manually
    while (id[length] != '\0') {
        length++;
    }

    int i = 0;
    int j = length - 1;
    bool isPalindrome = true;

    // Compare characters from both ends
    while (i < j) {
        if (id[i] != id[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << id << " is a palindrome ID." << endl;
    else
        cout << id << " is not a palindrome ID." << endl;

    return 0;
}
