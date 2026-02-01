#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int lotto[6];
    int count = 0;

    while (count < 6) {
        int num = (rand() % 50) + 1;
        bool isDuplicate = false;

        for (int i = 0; i < count; i++) {
            if (lotto[i] == num) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate == false) {
            lotto[count] = num;
            count++;
        }
    }
    cout << "Winning Lotto Numbers: ";
    for (int i = 0; i < 6; i++) {
        cout << lotto[i] << " ";
    }
    return 0;
}