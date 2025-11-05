// main.cpp
#include <iostream>
#include "Student.h"

int main() {
    Student s("Nandu", 29, 89.5);
    s.display();

    s.setName("Tom");
    s.setMarks(92.3);

    std::cout << "\nAfter update:\n";
    s.display();

    return 0;
}
