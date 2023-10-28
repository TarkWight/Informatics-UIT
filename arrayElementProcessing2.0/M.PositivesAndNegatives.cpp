#include <iostream>
#include <vector>


int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    
    std::vector<int> array(numberOfElements);
    for (int i = 0; i < array.size(); ++i) {
        std::cin >> array[i];
    }

    for (auto& element : array) {
        if (element > 0) {
            std::cout << element << ' ';
        }
    }
    for (auto& element : array) {
        if (element == 0) {
            std::cout << element << ' ';
        }
    }
    for (auto& element : array) {
        if (element < 0) {
            std::cout << element << ' ';
        }
    }
    
    return 0;
}
