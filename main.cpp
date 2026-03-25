#include <iostream>
#include "GeneratePassword.cpp"

int main() {
    int length;

    std::cout << "Enter the desired password length: ";
    std::cin >> length;

    if (length <= 0) {
        std::cerr << "Password length must be a positive integer." << std::endl;
        return 1;
    }

    std::string password = generatePassword(length);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}