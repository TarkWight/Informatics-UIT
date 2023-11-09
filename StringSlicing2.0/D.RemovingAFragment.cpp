#include <iostream>
#include <string>


int main(){
    std::string string;
    std::getline(std::cin,string);
    
    //    size_t firstOccurrence = string.find('h');
    //    size_t lastOccurrence = string.rfind('h');
    
    string.erase(string.find('h'), string.rfind('h') - string.find('h') + 1);
    
    std::cout << string;
    return 0;
}
