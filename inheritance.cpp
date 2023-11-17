#include <iostream>
#include <string>

// Base class (parent class)
class Animal {
public:
    // Constructor
    Animal(const std::string& name) : name(name) {}

    // Function to make a sound
    void makeSound() const {
        std::cout << "Some generic animal sound." << std::endl;
    }

    // Function to get the name
    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

// Derived class (child class) inheriting from Animal
class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& name, const std::string& breed) : Animal(name), breed(breed) {}

    // Function to make a sound (overrides the base class function)
    void makeSound() const {
        std::cout << "Woof! Woof!" << std::endl;
    }

    // Function to get the breed
    std::string getBreed() const {
        return breed;
    }

private:
    std::string breed;
};

int main() {
    // Creating an instance of the base class
    Animal genericAnimal("Generic");

    // Using base class functions
    std::cout << "Animal name: " << genericAnimal.getName() << std::endl;
    genericAnimal.makeSound();
    std::cout << std::endl;

    // Creating an instance of the derived class
    Dog myDog("Buddy", "Golden Retriever");

    // Using derived class functions
    std::cout << "Dog name: " << myDog.getName() << std::endl;
    std::cout << "Dog breed: " << myDog.getBreed() << std::endl;
    myDog.makeSound(); // This calls the overridden function in the derived class

    return 0;
}
