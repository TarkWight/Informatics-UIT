#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cin >> inputString;
    
    bool check = true;
    
    for (unsigned long i = 0; i < inputString.length() ; i++) {
        if (inputString[i] != inputString[inputString.length() - i - 1]) {
            check = false;
            break;
        }
    }
    
    check ? std::cout << "yes" : std::cout << "no";
    
    return 0;
}
