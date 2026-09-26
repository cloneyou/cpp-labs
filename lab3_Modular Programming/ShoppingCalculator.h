#pragma once
#ifndef SHOPPINGCALCULATOR_H
#define SHOPPINGCALCULATOR_H

// Function Prototypes
double calculateSubtotal(double price, int quantity);
double calculateDiscount(double subtotal, double discountPercentage);
double calculateFinalPrice(double subtotal, double discountAmount);

#endif