#include <iostream>
#include <iostream>


int main() {
    std::string string;
    std::getline(std::cin, string);
    
    
    while (true) {
        size_t occurrence = string.find('@');
        if (occurrence != std::string::npos) {
            string.erase(occurrence, 1);
        } else {
            break;
        }
    }
    
    std::cout << string;
    return 0;
}
