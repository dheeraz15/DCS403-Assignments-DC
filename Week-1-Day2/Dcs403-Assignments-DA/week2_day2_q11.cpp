#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double D, x1, x2;

    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2;
    }
    else if (D == 0) {
        x1 = -b / (2 * a);
        cout << "Roots are real and equal: " << x1 << " and " << x1;
    }
    else {
        cout << "Roots are imaginary.";
    }

    return 0;
}
