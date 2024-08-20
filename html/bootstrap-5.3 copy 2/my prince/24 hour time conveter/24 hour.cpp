#include <iostream>

// Function to get input from user
void getInput(int& hours, int& minutes) {
    std::cout << "Enter hours (0-23): ";
    std::cin >> hours;
    std::cout << "Enter minutes (0-59): ";
    std::cin >> minutes;
}

// Function to convert 24-hour notation to 12-hour notation
void convertTo12Hour(int hours, int minutes, char& am_pm, int& newHours) {
    if (hours == 0) {
        newHours = 12;
        am_pm = 'A';
    } else if (hours < 12) {
        newHours = hours;
        am_pm = 'A';
    } else if (hours == 12) {
        newHours = hours;
        am_pm = 'P';
    } else {
        newHours = hours - 12;
        am_pm = 'P';
    }
}

// Function to display output
void displayOutput(int hours, int minutes, char am_pm) {
    std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << (am_pm == 'A' ? "A.M." : "P.M.") << std::endl;
}

int main() {
    int hours, minutes, newHours;
    char am_pm;
    char repeat;

    do {
        getInput(hours, minutes);
        convertTo12Hour(hours, minutes, am_pm, newHours);
        displayOutput(newHours, minutes, am_pm);

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
