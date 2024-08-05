#include <iostream>

// Function to input length in meters and centimeters
void inputLength(double& meters, double& centimeters) {
    std::cout << "Enter length in meters: ";
    std::cin >> meters;
    std::cout << "Enter length in centimeters: ";
    std::cin >> centimeters;
}

// Function to convert length from meters and centimeters to feet and inches
void convertLength(double meters, double centimeters, int& feet, int& inches) {
    double totalCentimeters = meters * 100 + centimeters;
    double totalInches = totalCentimeters / 2.54;
    feet = static_cast<int>(totalInches / 12);
    inches = static_cast<int>(totalInches - feet * 12);
}

// Function to output length in feet and inches
void outputLength(int feet, int inches) {
    std::cout << "Equivalent length is " << feet << " feet and " << inches << " inches." << std::endl;
}

int main() {
    double meters, centimeters;
    int feet, inches;
    char repeat;

    do {
        inputLength(meters, centimeters);
        convertLength(meters, centimeters, feet, inches);
        outputLength(feet, inches);

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
