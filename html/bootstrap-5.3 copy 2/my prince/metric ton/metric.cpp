#include <iostream>
int main() {
    double weightInOunces, weightInMetricTons, boxesNeeded;
    const double ouncesInMetricTon = 35273.92;
    std::cout << "Enter weight of package in ounces: ";
    std::cin >> weightInOunces;
    weightInMetricTons = weightInOunces / ouncesInMetricTon;
    boxesNeeded = 1 / weightInMetricTons;
    std::cout << "Weight in metric tons: " << weightInMetricTons << std::endl;
    std::cout << "Number of boxes needed to yield one metric ton: " << boxesNeeded << std::endl;
    return 0;
}
