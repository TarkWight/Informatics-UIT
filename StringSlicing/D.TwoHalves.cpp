#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    // Исходя их функционального подхода - минимум переменных
    std::string resultString = inputString.substr((inputString.length() + 1) / 2) +
                               inputString.substr(0, (inputString.length() + 1) / 2);
    
    /*
    Иначе можно декомпозировать ещё больше...
    size_t length = inputString.length();
    size_t halfLength = (length + 1) / 2;

    std::string resultString = inputString.substr(halfLength) + inputString.substr(0, halfLength);
     */
    std::cout << resultString << std::endl;

    return 0;
}
