#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    int size = 5;
    int target;
    bool found = false;

    cout << "Enter number to search for: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Found " << target << " at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Number not found." << endl;
    }

    return 0;
}