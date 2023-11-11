#include <iostream>
#include <algorithm>
#include <string>


int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    size_t firstH = inputString.find('h');
    size_t lastH = inputString.rfind('h');
    
    std::string betweenH = inputString.substr(firstH + 1, lastH - firstH - 1);
    
    size_t hToH = betweenH.find('h');
    while (hToH != std::string::npos) {
        betweenH.replace(hToH, 1, "H");
        hToH = betweenH.find('h');
    }
    
    inputString.replace(firstH + 1, lastH - firstH - 1, betweenH);
    
    std::cout << inputString << std::endl;
    
    return 0;
}
