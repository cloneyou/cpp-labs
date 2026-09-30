#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter total number of students: ";
    cin >> numStudents;

    cout << "\n";

    double* cgpa = new double[numStudents];

    cout << "Enter GPA of students." << endl;

    for (int i = 0; i < numStudents; i++) {
        cout << "Student" << (i + 1) << ": ";
        cin >> cgpa[i];
    }

    cout << "\n";

    cout << "Displaying GPA of students." << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student" << (i + 1) << " :" << cgpa[i] << endl;
    }

    delete[] cgpa;

    return 0;
}