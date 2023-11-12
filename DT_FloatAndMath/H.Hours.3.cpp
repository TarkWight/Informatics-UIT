#include <iostream>
#include <cmath>

int main() {
    float angle;
    std::cin >> angle;

    float totalSeconds = angle / 360.0 * 12 * 60 * 60;
    
    int hours = static_cast<int>(totalSeconds / 3600);
    int minutes = static_cast<int>((totalSeconds - hours * 3600) / 60);
    int seconds = static_cast<int>(totalSeconds - hours * 3600 - minutes * 60);

    std::cout << hours << " " << minutes << " " << seconds ;

    return 0;
}
