#include <iostream>
#include <sum.hpp>
#include <algorithm>

int main() { 
    int first_number, second_number, third_number;
    std::cin >> first_number >> second_number >> third_number;
    std :: cout << med(first_number, second_number, third_number);
    return 0;
     }
