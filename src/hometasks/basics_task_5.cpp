#include <iostream>

int main(){
    std::cout << "Input n: \n";
    int n;
    std::cin >> n;
    int sum = 0;
    // for (int number = 1; number <= n; ++number)
    //     if (number % 2 == 1)
    //         sum += number;
    for (int number = 1; number <= n; number += 2)
        sum += number;
    std::cout << "sum = " << sum << '\n';
    return 0;
}