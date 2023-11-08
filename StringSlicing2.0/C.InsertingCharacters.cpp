#include <iostream>
#include <iostream>


int main() {
    std::string string;
    std::getline(std::cin, string);
    
    size_t t = std::size(string);
  
    for (int i = 0; i < t * 2 - 2; i++) {
        string.insert(++i, "*");
    }
    
    std::cout << string;
    return 0;
}
