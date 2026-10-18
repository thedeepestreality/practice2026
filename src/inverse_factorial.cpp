#include <iostream>

int main(){
    int n;
    std::cin >> n;
    double sum = 0.0;
    double elem = 1.0;
    for (int i=1; i<=n; ++i){
        elem /= i;
        sum += elem;
        
        /// This can loose precision (BAD)
        // elem *= i;
        // sum += 1.0/elem;
    }
    std::cout << "sum = " << sum << '\n';
    return 0;
}