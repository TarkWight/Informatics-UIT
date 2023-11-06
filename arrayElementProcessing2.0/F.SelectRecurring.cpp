#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int size;
    std::cin >> size;
    
    std::vector<int> array(size);
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    std::unordered_map<int, int> countMap;
    std::vector<int> result;

    for (int i = 0; i < size; i++) {
        if (countMap.find(array[i]) == countMap.end()) {
            countMap[array[i]] = 1;
        } else {
            countMap[array[i]]++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (countMap[array[i]] > 1) {
            result.push_back(array[i]);
            countMap[array[i]] = 0;
        }
    }

    if (result.empty()) {
        std::cout << '0';
    } else {
        for (auto& element : result) {
            std::cout << element << ' ';
        }
    }

    return 0;
}
