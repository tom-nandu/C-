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
