#include <iostream>

int main() {
    int hours, minutes, seconds;
    std::cin >> hours >> minutes >> seconds;
    
    float angle = (360.0 / 12) * hours + (360.0 / (12 * 60)) * minutes + (360.0 / (12 * 60 * 60)) * seconds;
    
    std::cout << angle << std::endl;
    
    return 0;
}
