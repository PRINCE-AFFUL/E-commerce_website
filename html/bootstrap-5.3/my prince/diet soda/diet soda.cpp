#include <iostream>
int main() {
    double sweetenerToKillMouse, mouseWeight, dieterWeight, safeAmount;
    const double sweetenerPercentage = 0.001;
    std::cout << "Enter amount of artificial sweetener needed to kill a mouse: ";
    std::cin >> sweetenerToKillMouse;
    std::cout << "Enter weight of mouse: ";
    std::cin >> mouseWeight;
    std::cout << "Enter weight of dieter: ";
    std::cin >> dieterWeight;
    safeAmount = (dieterWeight / mouseWeight) * sweetenerToKillMouse / sweetenerPercentage;
    std::cout << "Safe amount of diet soda to drink: " << safeAmount << std::endl;
    return 0;
}
