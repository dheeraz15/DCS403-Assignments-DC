#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int freq[26] = {0};

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            freq[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << ":" << freq[i] << " ";
        }
    }

    return 0;
}
