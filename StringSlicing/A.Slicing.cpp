#include <iostream>
#include <string>

void firstOutput(std::string string) {
    if (string.length() >= 3) {
        std::cout << string[2] << std::endl;
    }
}

void secondOutput(std::string string) {
    if (string.length() >= 2) {
        std::cout << string[string.length() - 2] << std::endl;
    }
}

void thirdOutput(std::string string) {
    if (string.length() >= 5) {
        for (int i = 0; i < 5; i++) {
            std::cout << string[i];
        }
        std::cout << std::endl;
    }
}

void fourthOutput (std::string string) {
    if (string.length() > 2) {
        for (int i = 0; i < string.length() - 2; i++) {
            std::cout << string[i];
        }
        std::cout << std::endl;
    }
}

void fifthOutput (std::string string) {
    if (string.length() >= 2) {
        for (int i = 0; i < string.length(); i += 2) {
            std::cout << string[i];
        }
        std::cout << std::endl;
    }
}

void sixthOutput (std::string string) {
    if (string.length() >= 2) {
        if (string.length() % 2 == 0) {
            for (int i = 1; i < string.length(); i += 2) {
                std::cout << string[i];
            }
        } else {
            for (int i = 1; i < string.length() - 1; i += 2) {
                std::cout << string[i];
            }
        }
        std::cout << std::endl;
    }
    
}

void seventhOutput (std::string string) {
    for (int i = string.length() - 1; i >= 0; i--) {
        std::cout << string[i];
    }
    std::cout << std::endl;
}

void eighthOutput (std::string string) {
    for (int i = string.length() - 1; i >= 0; i -= 2) {
        std::cout << string[i];
    }
    std::cout << std::endl;
}

void ninthOutput (std::string string) {
    auto element = string[0];
    int i = 0;
    while (element != '\0') {
        element = string[i++];
    }
    std::cout << --i;
}

int main() {
    std::string string;
    std::getline(std::cin, string);
    firstOutput(string);
    secondOutput(string);
    thirdOutput(string);
    fourthOutput (string);
    fifthOutput (string);
    sixthOutput (string);
    seventhOutput (string);
    eighthOutput (string);
    ninthOutput (string);
    
    return 0;
}
