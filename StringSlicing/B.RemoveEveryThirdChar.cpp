#include <iostream>
#include <string>


int main() {
    std::string string;
    std::getline(std::cin, string);
   
    if (!string.empty() && string.length() >= 2) {
        for (int i = 1; i < string.length(); i++) {
            if (i % 3 != 0) {
                std::cout << string[i];
            }
        }
    }
    
    return 0;
}
