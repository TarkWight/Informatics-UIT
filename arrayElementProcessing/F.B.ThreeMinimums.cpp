#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int numberOfElements;
    std::cin >> numberOfElements;
    std::vector<int> array(numberOfElements);

    for_each(array.begin(), array.end(), [](int &element) { std::cin >> element; });
    
    std::sort(array.begin(), array.end());

    for_each(array.begin(), array.begin() + 3, [](int element) { std::cout << element << ' '; });

    return 0;
}
