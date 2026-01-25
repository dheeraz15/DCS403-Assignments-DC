#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    string word = "", longest = "";

    getline(cin, sentence);

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i] != ' ' && i < sentence.length()) {
            word += sentence[i];
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}
