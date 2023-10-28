#include <iostream>
#include <vector>

int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    
    std::vector<int> array(numberOfElements);
    for (int i = 0; i < array.size(); ++i) {
        std::cin >> array[i];
    }

    for (int i = array.size() / 2 - 1; i >= 0; --i) {
        std::cout << array[i] << ' ';
    }
    for (int i = array.size() - 1; i >= array.size() / 2; --i) {
        std::cout << array[i] << ' ';
    }

    return 0;
}
