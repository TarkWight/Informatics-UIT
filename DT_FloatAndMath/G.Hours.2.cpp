#include <iostream>
#include <cmath>

int main() {
    double angle;
    std::cin >> angle;
    
    std::cout << std::fmod(angle, 30.0) * 12.0;

    return 0;
}
