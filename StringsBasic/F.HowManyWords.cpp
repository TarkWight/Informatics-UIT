#include <iostream>
#include <string>


int countWords(const std::string& string, const std::string& split) {
  bool check = false;
  int counter = 0;

  for (char symbol : string) {
    if (split.find(symbol) != std::string::npos) {
      if (check) {
        check = false;
      }
    } else {
      if (!check) {
        check = true;
        counter++;
      }
    }
  }

  return counter;
}


int main() {
    std::string inputString;
    std::getline(std::cin, inputString);
    std::string split = " ";

    std::cout << countWords(inputString, split) << std::endl;

    return 0;
}
