// Reads age, prints the value and the memory address using a pointer.

#include <iostream>
using namespace std;

int main() {
    int my_age;
    int* ptr_age = &my_age; //memoryaddress


    cout << "********** AGE POINTER **********" << endl;

    cout << "\nEnter your current age: ";
    cin >> my_age;

    cout << "\nAge passed by value      = " << my_age << endl;
    cout << "Age passed by reference/memory address = " << ptr_age << endl;

    cout << "\n********** END OF PROGRAM **********" << endl;

    return 0;
}