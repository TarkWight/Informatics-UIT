#include <iostream>
#include <vector>


int main() {
    int countOdElements;
    std::cin >> countOdElements;
    
    std::vector<int> array(countOdElements);
    for (auto& element : array) {
        std::cin >> element;
    }
    
    int desiredItem = array[0], capacity = 1, lengthOfCapacity = 1;
    int auxularyItem = desiredItem;
    for (int i = 1; i < countOdElements; i++) {
        if (array[i] == array[i-1]) {
            capacity++;
        } else {
            if (capacity > lengthOfCapacity) {
                lengthOfCapacity = capacity;
                desiredItem = auxularyItem;
            }
            auxularyItem = array[i];
            capacity = 1;
        }
    }
    
    if (capacity > lengthOfCapacity) {
        desiredItem = auxularyItem;
        lengthOfCapacity = capacity;
    }
    
    std::cout << desiredItem << ' ' << lengthOfCapacity;
    
    return 0;
}
