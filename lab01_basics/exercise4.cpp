// Reads four integers, multiplies only the non-zero ones, then prints the product.

#include <iostream>
using namespace std;

int main() {
    
    int product = 1;
    int num;

    cout << "Enter FOUR integer numbers:" << endl;

    
    for (int i = 1; i <= 4; i++) {
        cout << "Number " << i << ": ";
        cin >> num;

        if (num == 0) {
            continue;
        }

        product *= num;
    }

    cout << "\nProduct = " << product << endl;

    return 0;
}