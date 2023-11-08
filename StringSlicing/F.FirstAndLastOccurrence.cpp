#include <iostream>
#include <string>


int main() {
    std::string string;
    std::getline(std::cin, string);

    size_t firstOccurrence = string.find('f');
    if (firstOccurrence != std::string::npos) {
        
        size_t lastOccurrence = string.rfind('f');
        if (firstOccurrence == lastOccurrence) {
            std::cout << firstOccurrence << std::endl;
        } else {
            std::cout << firstOccurrence << ' ' << lastOccurrence;
        }
    }

    return 0;
}
