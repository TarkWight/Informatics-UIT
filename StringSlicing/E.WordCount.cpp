#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    std::cout << std::count(inputString.begin(), inputString.end(), ' ') + 1 << std::endl;

    return 0;
}
