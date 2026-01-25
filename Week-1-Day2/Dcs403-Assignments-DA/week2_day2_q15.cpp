#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            result += str[i];
        }
    }

    cout << result;

    return 0;
}
