#include <iostream>
int main() {
    double previousSalary, retroactivePay, newSalary, newMonthlySalary;
    const double payIncrease = 0.076;
    std::cout << "Enter previous annual salary: ";
    std::cin >> previousSalary;
    retroactivePay = previousSalary * payIncrease * 0.5;
    newSalary = previousSalary * (1 + payIncrease);
    newMonthlySalary = newSalary / 12;
    std::cout << "Retroactive pay due: " << retroactivePay << std::endl;
    std::cout << "New annual salary: " << newSalary << std::endl;
    std::cout << "New monthly salary: " << newMonthlySalary << std::endl;
    return 0;
}
