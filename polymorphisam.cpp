#include <iostream>
#include <string>

// Base class
class Shape {
public:
    // Virtual function for calculating area (to be overridden by derived classes)
    virtual double calculateArea() const = 0;

    // Virtual function for displaying information
    virtual void displayInfo() const {
        std::cout << "This is a shape." << std::endl;
    }

    // Virtual destructor (important for proper cleanup in polymorphic hierarchies)
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
public:
    // Constructor
    Circle(double radius) : radius(radius) {}

    // Override the calculateArea function
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    // Override the displayInfo function
    void displayInfo() const override {
        std::cout << "This is a circle with radius " << radius << "." << std::endl;
    }

private:
    double radius;
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(double length, double width) : length(length), width(width) {}

    // Override the calculateArea function
    double calculateArea() const override {
        return length * width;
    }

    // Override the displayInfo function
    void displayInfo() const override {
        std::cout << "This is a rectangle with length " << length << " and width " << width << "." << std::endl;
    }

private:
    double length;
    double width;
};

int main() {
    // Create instances of the derived classes
    Circle myCircle(5.0);
    Rectangle myRectangle(4.0, 6.0);

    // Use polymorphism to call functions
    Shape* shape1 = &myCircle;
    Shape* shape2 = &myRectangle;

    shape1->displayInfo();
    std::cout << "Area: " << shape1->calculateArea() << std::endl;

    std::cout << std::endl;

    shape2->displayInfo();
    std::cout << "Area: " << shape2->calculateArea() << std::endl;

    return 0;
}
