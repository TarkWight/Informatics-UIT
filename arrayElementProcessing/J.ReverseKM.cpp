#include <iostream>
#include <vector>

int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    
    std::vector<int> array(numberOfElements);
    for (int i = 0; i < array.size(); ++i) {
        std::cin >> array[i];
    }

    int k, m;
    std::cin >> k >> m;
    k--; m--;
    
    for (int i = 0; i < k; ++i) {
        std::cout << array[i] << ' ';
    }
    for (int i = m; i >= k; --i) {
        std::cout << array[i] << ' ';
    }
    for (int i = m + 1 ; i < array.size(); ++i) {
        std::cout << array[i] << ' ';
    }

    return 0;
}
