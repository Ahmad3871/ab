#include <iostream>
#include <string>
#include <vector>

// Define a class representing a Wheel
class Wheel {
public:
    Wheel(int size) : size(size) {}

    int getSize() const {
        return size;
    }

private:
    int size;
};

// Define a class representing a Car using aggregation
class Car {
public:
    // Constructor
    Car(const std::string& make, const std::string& model) : make(make), model(model) {}

    // Function to add a wheel to the car
    void addWheel(const Wheel& wheel) {
        wheels.push_back(wheel);
    }

    // Function to display information about the car
    void displayInfo() const {
        std::cout << "Car: " << make << " " << model << std::endl;
        std::cout << "Wheels: ";
        for (const auto& wheel : wheels) {
            std::cout << wheel.getSize() << " ";
        }
        std::cout << std::endl;
    }

private:
    std::string make;
    std::string model;
    std::vector<Wheel> wheels; // Aggregation: Car has Wheels
};

int main() {
    // Creating instances of the Wheel class
    Wheel frontLeftWheel(18);
    Wheel frontRightWheel(18);
    Wheel rearLeftWheel(18);
    Wheel rearRightWheel(18);

    // Creating an instance of the Car class
    Car myCar("Toyota", "Camry");

    // Adding wheels to the car using aggregation
    myCar.addWheel(frontLeftWheel);
    myCar.addWheel(frontRightWheel);
    myCar.addWheel(rearLeftWheel);
    myCar.addWheel(rearRightWheel);

    // Displaying information about the car
    myCar.displayInfo();

    return 0;
}
