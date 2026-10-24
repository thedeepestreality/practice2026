#include <iostream>

int main(){
    int bin_num;
    std::cout << "Input bin num: ";
    std::cin >> bin_num;
    int res = 0;
    int msb = 1;
    while (bin_num){
        res += msb * (bin_num % 10);
        msb *= 2;
        bin_num /= 10;
    }
    std::cout << res << '\n';
    return 0;
}