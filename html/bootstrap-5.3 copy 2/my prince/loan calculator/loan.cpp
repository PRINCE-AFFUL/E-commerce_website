#include <iostream>
int main() {
    double initialDebt, monthlyPayment, interestRate, debt, totalInterest;
    int months;
    std::cout << "Enter initial debt: ";
    std::cin >> initialDebt;
    std::cout << "Enter monthly payment: ";
    std::cin >> monthlyPayment;
    std::cout << "Enter interest rate (as percentage): ";
    std::cin >> interestRate;
    interestRate /= 100; // Convert percentage to fraction
    interestRate /= 12; // Convert annual rate to monthly rate
    debt = initialDebt;
    totalInterest = 0;
    months = 0;
    while (debt > 0) {
        double interest = debt * interestRate;
        double principal = monthlyPayment - interest;
        debt -= principal;
        totalInterest += interest;
        months++;
    }
    std::cout << "Number of months to pay off loan: " << months << std::endl;
    std::cout << "Total interest paid: " << totalInterest << std::endl;
    return 0;
}
