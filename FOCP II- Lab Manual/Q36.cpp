#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    cout << "Enter rows and columns of first matrix (m n): ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix (p q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible (n != p)." << endl;
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];  // assuming max 10x10

    cout << "Enter elements of first matrix (A):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix (B):\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // initialize result matrix C with 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // matrix multiplication: C = A * B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {  // or k < p (same, since n == p)
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant matrix (C = A * B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
