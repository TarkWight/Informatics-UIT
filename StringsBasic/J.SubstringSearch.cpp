#include <iostream>
#include <string>

bool isSubstring(const std::string& firstString, const std::string& secondtString) {
    size_t found = secondtString.find(firstString);
    return found != std::string::npos;
}

int main() {
    std::string firstString, secondtString;
    std::cin >> firstString >> secondtString;

    isSubstring(firstString, secondtString) ? std::cout << "yes\n" : std::cout << "no\n";

    return 0;
}
