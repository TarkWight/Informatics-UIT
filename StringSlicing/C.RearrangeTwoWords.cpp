#include <iostream>
#include <sstream>

int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    std::istringstream iss(inputString);
    std::string firstWord, secondWord;

    iss >> firstWord >> secondWord;
    std::cout << secondWord << ' ' << firstWord << std::endl;
    

    return 0;
}
