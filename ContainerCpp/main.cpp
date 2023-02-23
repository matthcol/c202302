#include <iostream>
#include <vector>

int main(){
    std::vector<double> vector{12.3, 4.5, .8, 9.34};
    // std::vector<double>::const_iterator first = vector.cbegin();
    // std::vector<double>::const_iterator last = vector.cend();
    auto first = vector.cbegin();
    auto last = vector.cend();
    while (first != last) {
        std::cout << *first << " ";
        ++first;
    }
    std::cout << std::endl << std::endl;

    for (auto &value: vector) {
        std::cout << value << " ";
    }
    std::cout << std::endl << std::endl;
}