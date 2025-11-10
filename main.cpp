#include <iostream>
#include <string>

class Device 
{
    protected:
    std::string name;
    bool is_on;
    
    public:
    
    Device(std::string n) : name(n), is_on(false) {}
    void turn_on()
    {
        is_on=true;
    }
    
    void turn_off()
    {
        is_on=false;
    }
    
    bool show_status()
    {
        return is_on;
    } 
    virtual void showStatus() const 
    {
        std::cout << name << " is " << (is_on ? "ON" : "OFF") << std::endl;
    }
    
};

class Light : public Device {
private:
    int brightness;

public:
    Light(std::string n, int b = 100) : Device(n), brightness(b) {}

    void setBrightness(int b) { brightness = b; }

    void showStatus() const override {
        std::cout << name << " Light is " << (is_on ? "ON" : "OFF")
                  << ", Brightness: " << brightness << "%" << std::endl;
    }
};

class TempSensor : public Device {
private:
    float temperature;

public:
    TempSensor(std::string n, float t = 25.0) : Device(n), temperature(t) {}

    void setTemperature(float t) { temperature = t; }

    void showStatus() const override {
        std::cout << name << " Temperature Sensor is " << (is_on ? "ON" : "OFF")
                  << ", Temperature: " << temperature << "°C" << std::endl;
    }
};

int main() {
    Light light1("Living Room");
    Light light2("Bedroom");
    Light light3("Kitchen");
    TempSensor sensor("Main Sensor");

    // Turn on lights and set brightness
    light1.turn_on(); light1.setBrightness(80);
    light2.turn_on(); light2.setBrightness(60);
    light3.turn_off(); // stays off

    // Turn on sensor and set temperature
    sensor.turn_on(); sensor.setTemperature(23.5);

    // Show status
    light1.showStatus();
    light2.showStatus();
    light3.showStatus();
    sensor.showStatus();

    return 0;
}
