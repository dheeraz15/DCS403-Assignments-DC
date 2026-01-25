#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;

    cout << "Number: ";
    cin >> number;
    cout << "Square root of " << fabs(number)
         << " = " << sqrt(fabs(number)) << endl;
    cout << "2 raised to power 3 = " << pow(2, 3) << endl;
    cout << "Absolute value of " << number
         << " = " << fabs(number) << endl;

    return 0;
}
