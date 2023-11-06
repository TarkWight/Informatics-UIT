#include <iostream>
#include <string>


int main() {
    std::string string;
    std::getline(std::cin, string);
    
    int count = 0, maxCount = 0,  lastIterator = 0;
    
    int length = static_cast<int>(string.length());
    for (int i = 0; i < length; i++) {
        if (string[i] != ' ') {
            count++;
            if (count > maxCount) {
                maxCount = count;
                lastIterator = i;
            }
        } else {
            count = 0;
        }
    }
    
    std::string word(maxCount, 'x');
    for (int i = lastIterator - maxCount + 1, j = 0; j < maxCount; i++, j++) {
        word[j] = string[i];
    }
    
    std::cout << word << '\n' << maxCount;
    
    return 0;
}
