#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    bool inWord = false;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << count;

    return 0;
}
