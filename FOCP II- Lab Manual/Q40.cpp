#include <iostream>
using namespace std;
int main() {
    char s[200], c[200];
    cout << "Enter a line of text:\n";
    cin.getline(s, 200);
    int i = 0, j = 0;
    // skip leading spaces
    while (s[i] == ' ') i++;
    bool sp = false;
    // remove extra spaces
    for (; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            sp = true;
        } else {
            if (sp && j > 0) {
                c[j++] = ' ';
            }
            c[j++] = s[i];
            sp = false;
        }
    }
    c[j] = '\0';
    // remove trailing space
    if (j > 0 && c[j - 1] == ' ') {
        c[j - 1] = '\0';
    }
    // make all lowercase
    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] = c[i] + ('a' - 'A');
        }
    }
    // first alphabet to uppercase
    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] = c[i] - ('a' - 'A');
            break;
        }
    }
    int wc = 0, dc = 0, sc = 0;
    bool iw = false;
    // count words, digits, specials
    for (i = 0; c[i] != '\0'; i++) {
        char ch = c[i];
        bool ia = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
        bool id = (ch >= '0' && ch <= '9');
        bool is = (ch == ' ');
        if (id) dc++;
        if (!ia && !id && !is) sc++;
        if (ia || id) {
            if (!iw) {
                iw = true;
                wc++;
            }
        } else {
            iw = false;
        }
    }
    // validate final string
    bool v = true;
    for (i = 0; c[i] != '\0'; i++) {
        char ch = c[i];
        bool ia = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
        bool id = (ch >= '0' && ch <= '9');
        bool is = (ch == ' ');
        if (!(ia || id || is)) {
            v = false;
            break;
        }
    }
    cout << "\nNormalized string: \"" << c << "\"\n";
    cout << "Total words: " << wc << endl;
    cout << "Total digits: " << dc << endl;
    cout << "Total special characters (in cleaned string): " << sc << endl;

    if (v)
        cout << "Final string is VALID (only alphabets, digits, spaces).\n";
    else
        cout << "Final string is INVALID (other characters present).\n";

    return 0;
}
