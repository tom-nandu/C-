// Student.cpp
#include "Student.h"
#include <iostream>

Student::Student(std::string name, int rollNo, double marks)
    : name(name), rollNo(rollNo), marks(marks) {}

std::string Student::getName() const {
    return name;
}

int Student::getRollNo() const {
    return rollNo;
}

double Student::getMarks() const {
    return marks;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setRollNo(int rollNo) {
    this->rollNo = rollNo;
}

void Student::setMarks(double marks) {
    this->marks = marks;
}

void Student::display() const {
    std::cout << "Name: " << name << "\nRoll No: " << rollNo << "\nMarks: " << marks << std::endl;
}
