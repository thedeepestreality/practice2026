#include <iostream>

void printReversedArray(int* arr, int sz){
    for (int idx = sz-1; idx >= 0; --idx)
        std::cout << arr[idx] << ' ';
    std::cout << '\n';
}

// void reverseArray(int* arr, int* tmp, int sz){
//     for (int idx = 0; idx < sz; ++idx)
//         tmp[sz - idx - 1] = arr[idx];
    
//     for (int idx = 0; idx < sz; ++idx)
//         arr[sz - idx - 1] = tmp[idx];
// }

void SwapPtr(int* x_ptr, int* y_ptr)
{
    int tmp = *(x_ptr);
    *(x_ptr) = *(y_ptr);
    *(y_ptr) = tmp;
}

void reverseArray(int* arr, int sz){
    for (int idx = 0; idx < sz/2; ++idx){
        SwapPtr(arr + idx, arr + sz - idx - 1);
        // int tmp = arr[idx];
        // arr[idx] = arr[sz - idx - 1];
        // tmp = arr[sz - idx - 1];
    }
}

void printArray(int* arr, int sz){
    for (int idx = 0; idx < sz; ++idx)
        std::cout << arr[idx] << ' ';
    std::cout << '\n';
}

int main(){
    constexpr int SZ = 10;
    int arr[SZ] = {2,4,6,8,10,12,14,16,18,20};
    int tmp[SZ];
    printReversedArray(arr, SZ);

    reverseArray(arr, SZ);
    printArray(arr, SZ);
    return 0;
}