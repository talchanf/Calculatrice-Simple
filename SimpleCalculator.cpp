#include <iostream>

int main(){
    std::cout << "====================" << std::endl;
    std::cout << "Simple Calculator 🧮" << std::endl;
    std::cout << "====================" << std::endl;

    double num1, num2, result;
    char op;
    bool continueCalculation = true;

    while(continueCalculation) {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;
        std::cout << "Enter second number: ";
        std::cin >> num2;

        if(op == '+') {
            result = num1 + num2;
        } else if(op == '-') {
            result = num1 - num2;
        } else if(op == '*') {
            result = num1 * num2;
        } else if(op == '/') {
            result = num1 / num2;
        } else {
            std::cout << "Invalid operator!" << std::endl;
            return 1;
        }

        std::cout << "Result: " << result << std::endl;

        std::cout << "Do you want to perform another calculation? (y/n): ";
        char choice;
        std::cin >> choice;
        if (choice == 'n' || choice == 'N') {
            continueCalculation = false;
        } else if (choice != 'y' && choice != 'Y') {
            std::cout << "Invalid choice! Exiting the calculator." << std::endl;
            continueCalculation = false;
        }
    }

    return 0;
}





