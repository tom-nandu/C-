#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }

    void show_vehicle() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int doors;

public:
    Car(string b, int s, int d) : Vehicle(b, s) {
        doors = d;
    }

    void show_car() {
        show_vehicle(); // Call base class method
        cout << "Doors: " << doors << endl;
    }
};

int main() {
    Car c("Toyota", 120, 4);
    c.show_car();

    return 0;
}
