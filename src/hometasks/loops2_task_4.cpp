#include <iostream>
#include <cmath>

// pi = 4 * (1 -1/3 + 1/5 -1/7 + ...)

int main(){
    double eps;
    std::cout << "Input eps: ";
    std::cin >> eps;
    double sum = 0.0;
    double elem = 1.0;
    int count = 1;
    double sign = 1.0;
    while (std::abs(elem) >= eps){
        sum += elem;
        ++count;
        sign *= -1;
        elem = sign / (2*count-1);
    }
    std::cout.precision(16);
    std::cout << "pi (row ) = " << 4 * sum << '\n';
    std::cout << "pi (fact) = " << 3.14159265359 << '\n';
    return 0;
}