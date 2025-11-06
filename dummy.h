#include "dec.h"
#include <string>
#include <iostream>

Student::Student(std::string name, int age, double marks)
{
    this->Name = name;
    this->Age = age;
    this->Marks = marks;
    std::cout << "Constructor called ..." << std::endl;
}

std::string Student::getter_name() const {
    return Name;
}

int Student::getter_age() const {
    return Age;
}

double Student::getter_marks() const {
    return Marks;
}

void Student::setter_name(std::string name) {
    this->Name = name;
}

void Student::setter_age(int age) {
    this->Age = age;
}

void Student::setter_marks(double marks) {
    this->Marks = marks;
}

void Student::display() const {
    std::cout << "Name: " << Name << "\nAge: " << Age << "\nMarks: " << Marks << std::endl;
}


#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1; // returns a number between 1 and 6
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // seed random number generator

    int player1 = rollDice();
    int player2 = rollDice();

    std::cout << "Player 1 rolls: " << player1 << std::endl;
    std::cout << "Player 2 rolls: " << player2 << std::endl;

    if (player1 > player2) {
        std::cout << "Player 1 wins!" << std::endl;
    } else if (player2 > player1) {
        std::cout << "Player 2 wins!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}
