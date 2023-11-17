#include <iostream>
#include <string>

// Class representing a simple BankAccount with encapsulation
class BankAccount {
public:
    // Constructor
    BankAccount(const std::string& accountHolder, double balance)
        : accountHolder(accountHolder), balance(balance) {}

    // Getter for the account holder's name
    std::string getAccountHolder() const {
        return accountHolder;
    }

    // Getter for the account balance
    double getBalance() const {
        return balance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

private:
    // Private member variables, encapsulated within the class
    std::string accountHolder;
    double balance;
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("John Doe", 1000.0);

    // Accessing information through public member functions
    std::cout << "Account Holder: " << myAccount.getAccountHolder() << std::endl;
    std::cout << "Balance: $" << myAccount.getBalance() << std::endl;

    // Performing transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display updated balance
    std::cout << "Updated Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}
