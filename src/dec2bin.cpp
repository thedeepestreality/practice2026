#include <iostream>

int main(){
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    int msb = 1;
    int n_copy = n;
    while (n_copy){
        n_copy /= 2;
        msb *= 2;
    }
    msb /= 2;
    while (n){
        std::cout << n / msb;
        n %= msb;
        msb /= 2;
    }
    std::cout <<'\n';
    return 0;
}