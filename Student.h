// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int rollNo;
    double marks;

public:
    Student(std::string name, int rollNo, double marks);

    // Getters
    std::string getName() const;
    int getRollNo() const;
    double getMarks() const;

    // Setters
    void setName(std::string name);
    void setRollNo(int rollNo);
    void setMarks(double marks);

    void display() const;
};

#endif
