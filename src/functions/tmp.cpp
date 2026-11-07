#include <iostream>

extern int global_var;

int global_var = 0; //tmp.cpp_global_var

void changeGlovalVar(int val){
    global_var = val;
    std::cout << global_var << '\n';
}