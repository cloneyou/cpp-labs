// Simple calculator: reads two integers, prints sum, difference, product, and quotient (1 decimal).


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int num1, num2;

    cout << "****** MY CALCULATOR ******" << endl;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Calculations & Output
    cout << "\nAddition       : " << (num1 + num2) << endl;
    cout << "Subtraction    : " << (num1 - num2) << endl;
    cout << "Multiplication : " << (num1 * num2) << endl;

    cout << "Division       : " << fixed << setprecision(1) << ((double)num1 / num2) << endl;

    cout << "\n****** END OF PROGRAM ******" << endl;

    return 0;
}