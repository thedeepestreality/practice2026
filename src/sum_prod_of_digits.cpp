#include <iostream>

int main(){
    int n;
    std::cout << "input n: ";
    std::cin >> n;
    int sum = 0;
    int prod = 1;
    while (n){
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    std::cout << sum << ' ' << prod << '\n';
    return 0;
}