#include <iostream>

int main(){

    int int_val = 16'777'217; // (2^24)+1
    std::cout << int_val << '\n';
    float x = int_val; // float has only 24 precision bits
    std::cout << (int)x << '\n'; // output will be 16777216, 1 bit lost
    return 0;
}