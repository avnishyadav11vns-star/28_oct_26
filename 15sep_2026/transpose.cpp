#include <iostream>
using namespace std;

int main() {
    int a[10][10], transpose[10][10];
    int n;

    cout << "Enter the order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Find transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Display transpose
    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    // Check symmetric
    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != transpose[i][j]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "\nMatrix is Symmetric.";
    else
        cout << "\nMatrix is Not Symmetric.";

    return 0;
}