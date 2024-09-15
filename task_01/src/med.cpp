#include <algorithm>

int med(int first_number, int second_number, int third_number){
        int res =  (first_number + second_number + third_number) - std::max(first_number, std::max(second_number,third_number)) - std::min(first_number, std::min(second_number, third_number));
        return res;
    }