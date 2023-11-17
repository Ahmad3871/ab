#include <iostream>
#include <string>

// Engine class
class Engine {
public:
    Engine(int cylinders) : cylinders(cylinders) {}

    void start() const {
        std::cout << "Engine started. Vroom!" << std::endl;
    }

private:
    int cylinders;
};

// Car class using composition
class Car {
public:
    Car(const std::string& make, const std::string& model, int cylinders)
        : make(make), model(model), carEngine(cylinders) {}

    void drive() const {
        std::cout << "Driving the " << make << " " << model << "." << std::endl;
    }

    void startEngine() const {
        carEngine.start();
    }

private:
    std::string make;
    std::string model;
    Engine carEngine;
};

int main() {
    // Creating an instance of the Car class
    Car myCar("Toyota", "Camry", 4);

    // Using the Car class functions
    myCar.startEngine();
    myCar.drive();

    return 0;
}
