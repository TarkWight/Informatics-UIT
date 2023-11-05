#include <iostream>
#include <vector>
#include <cmath>

bool isPrimeNumber(int number) {
    if (number == 1) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size;
    std::cin >> size;
    
    std::vector<int> inputArray(size);
    std::vector<int> outputArray;
    
    for (auto& element : inputArray) {
        std::cin >> element;
        if (isPrimeNumber(element)) {
            outputArray.push_back(element);
        }
    }
    
    if (outputArray.empty()) {
        std::cout << 0;
    } else {
        for (auto& element : outputArray) {
            std::cout << element << ' ';
        }
    }
    
    
    return 0;
}
