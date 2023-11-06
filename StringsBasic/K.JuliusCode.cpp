#include<string>
#include<iostream>


int main() {
    std::string cipherWord;
    std::cin >> cipherWord;
    
    std::string auxWord = cipherWord;
    
    int shift;
    std::cin >> shift;
    
    int length = static_cast<int>(cipherWord.length());
    
    for (int i = 0; i < length; i++) {
        cipherWord[i] = static_cast<int>(cipherWord[i]) - shift;
        if (cipherWord[i] < 65) {
            auxWord[i] = static_cast<int>(cipherWord[i]) + 26;
            cipherWord[i] = auxWord[i];
        }
    }
    
    std::cout << cipherWord;
    
    return 0;
}
