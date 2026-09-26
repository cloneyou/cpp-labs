#include "ShoppingCalculator.h"

double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}

double calculateDiscount(double subtotal, double discountPercentage) {
    return (subtotal * discountPercentage) / 100.0;
}

double calculateFinalPrice(double subtotal, double discountAmount) {
    return subtotal - discountAmount;
}