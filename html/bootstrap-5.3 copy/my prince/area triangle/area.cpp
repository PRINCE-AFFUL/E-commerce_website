#include <iostream>
#include <cmath>

// Function to calculate area and perimeter of a triangle
void calculateTriangleProperties(double a, double b, double c, double& area, double& perimeter) {
    // Check if the input values can form a triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        area = 0;
        perimeter = 0;
        return;
    }

    // Calculate semiperimeter
    double s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calculate perimeter
    perimeter = a + b + c;
}

int main() {
    double a, b, c, area, perimeter;

    std::cout << "Enter length of side a: ";
    std::cin >> a;
    std::cout << "Enter length of side b: ";
    std::cin >> b;
    std::cout << "Enter length of side c: ";
    std::cin >> c;

    calculateTriangleProperties(a, b, c, area, perimeter);

    if (area == 0 && perimeter == 0) {
        std::cout << "The input values cannot form a triangle." << std::endl;
    } else {
        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }

    return 0;
}
