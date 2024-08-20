#include <iostream>

int main() {
   
    double amountNeeded, interestRate, durationInMonths, faceValue, monthlyPayment;
    const double interestRateDecimal = 0.15;
    std::cout << "Enter amount needed: ";
    std::cin >> amountNeeded;
    std::cout << "Enter interest rate (in decimal form): ";
    std::cin >> interestRate;
    std::cout << "Enter duration of loan in months: ";
    std::cin >> durationInMonths;
    faceValue = amountNeeded / (1 - interestRateDecimal * durationInMonths / 12);
    monthlyPayment = faceValue / durationInMonths;
    std::cout << "Face value required: " << faceValue << std::endl;
    std::cout << "Monthly payment: " << monthlyPayment << std::endl;
    return 0;
}
