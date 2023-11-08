#include <iostream>
#include <string>


int main() {
    std::string string;
    std::getline(std::cin, string);

    size_t firstOccurrence = string.find('f');
    
    
    if (firstOccurrence != std::string::npos) {
        string.erase(firstOccurrence, 1);
        
        size_t secondOccurrence = string.find('f');
        if (++secondOccurrence) {
            std::cout << secondOccurrence ;
        } else {
            std::cout << -1;
        }
    } else {
        std::cout << -2;
    }

    return 0;
}
