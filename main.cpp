#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int compare() {
    int a = 6;
    int b = 7;

    if(a > b) {
    cout << "a is greater than b" << endl;
    }
    else cout << "a is not greater than b" << endl;
    return 0;
}



int marks() {
    int score = 85;

    if(score >= 80) {
        cout << "Grade A" << endl;
    }
    else if(score >= 60) {
        cout << "Grade B" << endl;
    }
    else if(score >= 40) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade D" << endl;
    }
}

int check(){
    int number = 3;

    if (number > 0 && number % 2 == 0){
        cout << "The number is positive and even." << endl;
    }

    if (number > 0) {
        if (number % 2 != 0) {
            cout << "The number is positive and odd." << endl;
        }
    }
    if (number < 0) {
        cout << "The number is negative." << endl;
    }
    if (number == 0) {
        cout << "The number is zero." << endl;
    }
}

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int leap() {
    int year = 20000;
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}

// int switchMarks() {
//     int score = 85;
//     switch (score)
//     {
//         case 'A': (score >= 80);
//             cout << "Grade A" << endl;
//             break;

//         case 'B': (score < 60 && score >= 79);
//             cout << "Grade B" << endl;
//             break;

//         case 'C': (score < 40 && score >= 59);
//             cout << "Grade C";
//             break;

//         case 'D': (score < 80 && score >= 70);
//             cout << "\nYou got a C\n";
//             break;
//     }
//     return 0;
// }


int main() {
    compare();
    marks();
    check();
    leap();
    int num = -1;
    srand(time(0));
    int number = rand() % 10;
    cout << "Random Number: " << number << endl;
    if (num > 0) {
        cout << "Is Positive" << endl;
    }
    else cout << "Is Negative" << endl;
}

