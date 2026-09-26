#include <iostream>
#include <iomanip> 
using namespace std;

double calculateSubtotal(double price, int quantity);
double calculateDiscount(double subtotal, double discountPercentage);
double calculateFinalPrice(double subtotal, double discountAmount);

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

double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}

double calculateDiscount(double subtotal, double discountPercentage) {
    return (subtotal * discountPercentage) / 100.0;
}

double calculateFinalPrice(double subtotal, double discountAmount) {
    return subtotal - discountAmount;
}