#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter values for 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row max values:" << endl;
    for (int i = 0; i < 3; i++) {
        int maxVal = matrix[i][0];
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        cout << maxVal << (i < 2 ? ", " : "");
    }
    cout << endl;

    return 0;
}