#include<string>
#include<iostream>


int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    
    int length = static_cast<int>(inputString.length());
    char symbol = '\0';
    
    for (int i = 0; i < length; i++) {
        for (int j= i + 1; j < length; j++) {
            if (inputString[i] == inputString[j]) {
                symbol = inputString[i];
            }
        }
    }
    
    std::cout << symbol;
    
    return 0;
}
