#include <iostream>
#include <iostream>


int main() {
    std::string string;
    std::getline(std::cin, string);
    
    size_t occurrence;
    while ((occurrence = string.find('1')) != std::string::npos) {
            string.replace(occurrence, 1, "one");
    }
    
    std::cout << string;
    return 0;
}
