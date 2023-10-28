#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    std::vector<int> array(numberOfElements);

    for (auto& element : array) {
        std::cin >> element;
    }

    std::sort(array.begin(), array.end());

    for (int i = 0; i < 3; i++) {
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}
