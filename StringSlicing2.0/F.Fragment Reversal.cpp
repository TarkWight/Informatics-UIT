#include <iostream>
#include <algorithm>
#include <string>


int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    size_t firstH = inputString.find('h');
    size_t lastH = inputString.rfind('h');
    
    std::string betweenH = inputString.substr(firstH + 1, lastH - firstH - 1);
    std::reverse(betweenH.begin(), betweenH.end());
    
    inputString.replace(firstH + 1, lastH - firstH - 1, betweenH);
    
    std::cout << inputString << std::endl;
    
    return 0;
}
