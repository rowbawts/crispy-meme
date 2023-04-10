#include <iostream>
#include <string>

int main() {
    char searchChar;
    int charCount = 0;
    std::string userString;

    std::cout << "Enter a string ";
    std::getline(std::cin, userString);

    std::cout << "Enter a character: ";
    std::cin >> searchChar;

    std::cout << "User string: " << userString << std::endl;
    std::cout << "User char: " << searchChar << std::endl;

    for (char i : userString) {
        if (i == searchChar) {
            charCount++;
        }
    }

    std::cout << "Character Found: " << charCount << " times." << std::endl;

    return 0;
}
