#include <iostream>
#include <cmath>

int main(){
    std::cout << "Input n and x: ";
    int n;
    double x;
    std::cin >> n >> x;
    double sum = 0.0;
    // NOT OPTIMAL
    // for (int deg = 1; deg <= n; ++deg)
    //     sum += std::pow(x, deg);

    // double elem = 1.0;
    // for (int deg = 1; deg <= n; ++deg){
    //     elem *= x;
    //     sum += elem;
    // }

    for (int deg = 1; deg <= n; ++deg){
        sum = 1.0 + x * sum;
    }
    std::cout << "sum = " << sum << '\n';
    return 0;
}