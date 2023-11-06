#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    bool check = true;
    int length = static_cast<int>(inputString.length());
    for (int i = 0; i < length; i++) {
        if (inputString[i] == ' ') {
            inputString.erase(i, 1);
            length--;
            i--;
        }
    }
    
    for (unsigned long i = 0; i < length; i++) {
        if (inputString[i] != inputString[length - i - 1]) {
            check = false;
            break;
        }
    }
    
    check ? std::cout << "yes" : std::cout << "no";
    
    return 0;
}
