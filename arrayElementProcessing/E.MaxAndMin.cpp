#include <iostream>
#include <vector>
#include <climits>


int main() {
    int sizeOfArray, maxNaturalNumber = 0, minNaturalNumber = INT_MAX;
    std::cin >> sizeOfArray;
    
    std::vector<int> array(sizeOfArray);
    for (auto& element : array) {
        std::cin >> element;
        
        if (element % 2 == 0) {
            if (element > 0) {
                if (element > maxNaturalNumber) {
                    maxNaturalNumber = element;
                }
                if (element < minNaturalNumber) {
                    minNaturalNumber = element;
                }
            }
        }
    }
    
    
    (minNaturalNumber == INT_MAX && maxNaturalNumber == 0) ?
    std::cout << -1 << ' ' << -1 :
    std::cout << minNaturalNumber << ' ' <<  maxNaturalNumber;
    
    return 0;
}
