#include <iostream>
#include <vector>

int main() {
    int size, startingShiftElement, finitShiftElement, shift;
    std::cin >> size;

    std::vector<int> array(size);
    for (auto& element : array) {
        std::cin >> element;
    }

    std::cin >> startingShiftElement >> finitShiftElement >> shift;

    for (int i = 0; i < shift; i++) {
        int j = finitShiftElement - 1;
        int temp = array[j];

        while (j > startingShiftElement - 1) {
            array[j] = array[j - 1];
            j--;
        }
        array[startingShiftElement - 1] = temp;
    }

    for (auto& element : array) {
        std::cout << element << ' ';
    }

    return 0;
}
