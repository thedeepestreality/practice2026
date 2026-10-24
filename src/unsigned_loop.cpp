#include <iostream>

int main(){
    unsigned char val = 0;
    do{
        std::cout << (int)val++ << '\n';
    } while (val != 0);
    return 0;
}