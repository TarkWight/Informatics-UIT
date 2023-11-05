#include <iostream>
#include <vector>
#include <cmath>

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int size;
    std::cin >> size;

    std::vector<int> inputArray(size);
    std::vector<int> outputArray;

    for (auto& element : inputArray) {
        std::cin >> element;
        if (isFibonacci(element)) {
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
