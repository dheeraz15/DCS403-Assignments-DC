#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    int sum = calculateSum(numbers, size);

    cout << "The sum of the array is: " << sum << endl;

    return 0;
}