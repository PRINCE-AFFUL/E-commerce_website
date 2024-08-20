#include <iostream>
int main() {
    double currentCost, years, inflationRate, estimatedCost;
    std::cout << "Enter current cost: ";
    std::cin >> currentCost;
    std::cout << "Enter number of years: ";
    std::cin >> years;
    std::cout << "Enter inflation rate (as percentage): ";
    std::cin >> inflationRate;
    inflationRate /= 100; // Convert percentage to fraction
    for (int i = 0; i < years; i++) {
        currentCost *= (1 + inflationRate);
    }
    estimatedCost = currentCost;
    std::cout << "Estimated cost after " << years << " years: " << estimatedCost << std::endl;
    return 0;
}
