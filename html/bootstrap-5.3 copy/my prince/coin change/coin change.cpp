#include <iostream>

// Function to compute the number of coins of a certain denomination
void computeCoins(int coinValue, int& number, int& amountLeft) {
    number = amountLeft / coinValue;
    amountLeft %= coinValue;
}

int main() {
    int amount, quarters, dimes, pennies;
    char repeat;

    do {
        std::cout << "Enter amount of change (1-99 cents): ";
        std::cin >> amount;

        quarters = 0; dimes = 0; pennies = 0;
        int amountLeft = amount;

        computeCoins(25, quarters, amountLeft);
        computeCoins(10, dimes, amountLeft);
        pennies = amountLeft;

        std::cout << amount << " cents can be given as ";
        if (quarters > 1) {
            std::cout << quarters << " quarters ";
        } else if (quarters == 1) {
            std::cout << quarters << " quarter ";
        }
        if (dimes > 0) {
            if (quarters > 0) {
                std::cout << "and ";
            }
            if (dimes > 1) {
                std::cout << dimes << " dimes ";
            } else {
                std::cout << dimes << " dime ";
            }
        }
        if (pennies > 0) {
            if (quarters > 0 || dimes > 0) {
                std::cout << "and ";
            }
            if (pennies > 1) {
                std::cout << pennies << " pennies";
            } else {
                std::cout << pennies << " penny";
            }
        }
        std::cout << std::endl;

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
