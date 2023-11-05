#include <iostream>
#include <vector>


int main() {
    int size, counter = 0;
    std::cin >> size;
    
    std::vector<int> inputArray(size);
    std::vector<int> outputArray(size);
    
    
    for (int i = 0; i < size; i++) {
        std::cin >> inputArray[i];
        
        if (inputArray[i] == 0) {
            counter ++;
        } else {
            outputArray[i - counter] = inputArray[i];
        }
    }
        
    
    for (int i = size - counter; i < size; i++) {
        outputArray[i] = 0;
    }
    
    
    for (auto& element : outputArray) {
        std::cout << element << " ";
    }
 
    return 0;
}
