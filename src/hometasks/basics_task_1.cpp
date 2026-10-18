#include <iostream>

int main(){
    std::cout << "Input a,b,c,d,x:";
    double a;
    double b;
    double c;
    double d;
    double x;
    std::cin >> a >> b >> c >> d >> x;
    double y = (x - a) / (b - a) * (d - c) + c;
    std::cout << "y = " << y << '\n';
    return 0;
}