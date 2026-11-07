#include <iostream>

void printHello(){
    std::cout << "Hello\n";
}

void ninja();

static int global_var = 0;

int sum(int a, int b)
{
    std::cout << global_var << '\n';
    return a+b;
}

void changeGlovalVar(int val);

void callCounter(){
    static int counter = 0;
    std::cout << ++counter << '\n';
}

int main(){
    printHello();
    ninja();
    // int res = sum(1, 2);
    sum(1,2);
    changeGlovalVar(42);
    std::cout << global_var << '\n';

    callCounter();
    callCounter();
    callCounter();
    return 0;
}

void ninja(){
    std::cout << "YOU CANNOT SEE ME\n";
}