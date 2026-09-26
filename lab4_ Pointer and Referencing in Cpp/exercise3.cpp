// Reads two integers, swaps them using pointers, then prints before and after values.

#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b);

int main() {
    int num1, num2;

    cout << "+++ SWAPPING 2 INTEGERS +++" << endl;

    cout << "\nEnter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "\nBefore swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}

void swapNumbers(int* a, int* b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;    
}