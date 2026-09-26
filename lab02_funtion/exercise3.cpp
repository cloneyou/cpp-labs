// Reads a student mark and prints pass/fail status via a function (excellent, passed, or needs improvement).

#include <iostream>
using namespace std;

void displayResult(int mark);

int main() {
    int studentMark;

    cout << "---------PASS/FAIL STATUS---------" << endl;

    cout << "Enter student's mark: ";
    cin >> studentMark;

    displayResult(studentMark);

    return 0;
}

void displayResult(int mark) {
    if (mark >= 80) {
        cout << "Congratulations! Excellent." << endl;
    }
    else if (mark >= 50) {
        cout << "Congratulations! You passed the subject." << endl;
    }
    else {
        cout << "You need to improve. Please try again." << endl;
    }
}