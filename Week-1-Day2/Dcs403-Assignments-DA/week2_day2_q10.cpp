#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1;
    cin >> str2;

    string result = str1 + " " + str2;

    cout << "Concatenated String: " << result;

    return 0;
}
