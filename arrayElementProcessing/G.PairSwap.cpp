#include <iostream>
#include <vector>


int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    
    std::vector<int> array(numberOfElements + 1);
    for (int i = 1; i < array.size(); ++i) {
        std::cin >> array[i];
    }
    
    for (int i = 1; i < array.size() - 1; i += 2) {
        std::swap(array[i], array[i + 1]);
    }

    for (int i = 1; i < array.size(); ++i) {
        std::cout << array[i] << ' ';
    }

    return 0;
}
