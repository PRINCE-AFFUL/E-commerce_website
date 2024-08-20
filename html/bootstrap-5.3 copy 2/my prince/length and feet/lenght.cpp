#include <iostream>

// Function to input length in feet and inches
void inputLength(int& feet, int& inches) {
    std::cout << "Enter length in feet: ";
    std::cin >> feet;
    std::cout << "Enter length in inches: ";
    std::cin >> inches;
}

// Function to convert length from feet and inches to meters and centimeters
void convertLength(int feet, int inches, double& meters, double& centimeters) {
    double totalInches = feet * 12 + inches;
    double totalMeters = totalInches * 0.3048 / 12;
    meters = static_cast<int>(totalMeters);
    centimeters = (totalMeters - meters) * 100;
}

// Function to output length in meters and centimeters
void outputLength(double meters, double centimeters) {
    std::cout << "Equivalent length is " << meters << " meters and " << centimeters << " centimeters." << std::endl;
}

int main() {
    int feet, inches;
    double meters, centimeters;
    char repeat;

    do {
        inputLength(feet, inches);
        convertLength(feet, inches, meters, centimeters);
        outputLength(meters, centimeters);

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
