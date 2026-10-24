#include <iostream>

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int x = 42;
    int y = 666;
    for (int idx = -20; idx < 2'000'000; ++idx)
        std::cout << idx << " : " << arr[idx] << '\n';
    return 0;
}