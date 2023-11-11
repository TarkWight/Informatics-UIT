#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string string;
    std::getline(std::cin, string);
    
    size_t firstPosition, lastPosition;
    std::cin >> firstPosition >> lastPosition;
    
    auto firstIter = string.begin() + (firstPosition - 1);
    auto lastIter = string.begin() + (lastPosition - 1);
    
    std::reverse(firstIter, lastIter + 1);
    
    std::cout << string << std::endl;
    
    return 0;
}
