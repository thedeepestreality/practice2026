#include <iostream>
#include <cstring>

int main(){
    char str[64];
    std::cin >> str;
    int len = strlen(str);
    unsigned int res = 0;
    for (int idx = 0; idx < len; ++idx){
        int digit = str[idx] - '0';
        res = res * 2 + digit;
    }
    std::cout << res << '\n';
    return 0;
}