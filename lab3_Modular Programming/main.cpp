#include <iostream>
#include <iomanip>
#include "ShoppingCalculator.h" 
using namespace std;

int main() {
    double itemPrice, discountPercentage;
    int quantity;
    double subtotal, discountAmount, finalPrice;

    cout << "********** MY SHOPPING CALCULATOR **********" << endl;

    cout << "Enter item price (RM): ";
    cin >> itemPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter discount percentage (%): ";
    cin >> discountPercentage;

    subtotal = calculateSubtotal(itemPrice, quantity);
    discountAmount = calculateDiscount(subtotal, discountPercentage);
    finalPrice = calculateFinalPrice(subtotal, discountAmount);

    cout << "\nSubtotal        : RM" << fixed << setprecision(2) << subtotal << endl;
    cout << "Discount Amount : RM" << discountAmount << endl;
    cout << "Final Price     : RM" << finalPrice << endl;

    return 0;
}