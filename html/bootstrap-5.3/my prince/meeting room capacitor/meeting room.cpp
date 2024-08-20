#include <iostream>
int main() {
    int maxCapacity, attendees, additionalAttendees;
    std::cout << "Enter maximum room capacity: ";
    std::cin >> maxCapacity;
    std::cout << "Enter number of people to attend the meeting: ";
    std::cin >> attendees;
    if (attendees <= maxCapacity) {
        additionalAttendees = maxCapacity - attendees;
        std::cout << "Meeting is legal. Additional people that can attend: " << additionalAttendees << std::endl;
    } else {
        additionalAttendees = attendees - maxCapacity;
        std::cout << "Meeting cannot be held due to fire regulations. Number of people to exclude: " << additionalAttendees << std::endl;
    }
    return 0;
}
