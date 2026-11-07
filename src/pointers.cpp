#include <iostream>

void Swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void SwapPtr(int* x_ptr, int* y_ptr)
{
    int tmp = *(x_ptr);
    *(x_ptr) = *(y_ptr);
    *(y_ptr) = tmp;
}

void ArrFunc(int arr[])
{
    std::cout << sizeof(arr) << '\n';
}

int main()
{
    // int x; // 7
    // int y; // 3
    // std::cin >> x >> y;
    // // int tmp = x;
    // // x = y;
    // // y = tmp;
    // x -= y; // x = x - y // 4
    // y += x; // y = y + x - y; = x // 7
    // x = y - x; // 3
    // std::cout << x << ' ' << y << '\n';
    // Swap(x,y);
    // std::cout << x << ' ' << y << '\n';
    // int x = 2;
    // int* x_ptr = &(x);
    // *(x_ptr) = 3;
    // std::cout << x << '\n';

    // int x = 3;
    // int y = 5;
    // std::cout << x << ' ' << y << '\n';
    // SwapPtr(&x, &y);
    // std::cout << x << ' ' << y << '\n';
    // *(&(x)); // x

    // &(*((int*)x));
    // std::cout << sizeof(int*) << '\n';

    int arr[3] = {1, 2, 3};
    std::cout << *(arr+1) << '\n';
    int* ptr = arr;
    std::cout << *(ptr+1) << '\n';
    std::cout << ptr[1] << '\n';

    std::cout << "sizeof(int) = " << sizeof(int) << '\n';
    int x;
    std::cout << "sizeof(int x) = " << sizeof(x) << '\n';
    std::cout << "sizeof(int*) = " << sizeof(int*) << '\n';
    std::cout << "sizeof(arr) = " << sizeof(arr) << '\n';
    std::cout << "num of elems in arr = " << sizeof(arr)/sizeof(arr[0]) << '\n';

    ArrFunc(arr);

    double y;
    int* d_ptr = (int*)&y;

    int tmp = 258;
    char* tmp_bytes = (char*)&tmp;
    std::cout << (int)tmp_bytes[0] << ' ' << (int)tmp_bytes[1] << ' ' << (int)tmp_bytes[2] << '\n';

    return 0;
}