#include <iostream>

// using namespace std; // BAD
// using std::cout;     // Slightly better

int main(){
    /// std::endl is platform-specific with additional stream flush call
    // std::cout << "Hello" << std::endl;
    /// Simple `\n` newline symbol is a bit more effective and simpler
    // std::cout << "Hello\n";

    /// what if we want to add a value with assignment? 
    // int x = 5;
    // x = x + 10; // option a (BAD)
    // x += 10;    // option b (GOOD)

    /// difference between ++x and x++
    int x = 0;
    std::cout << x << '\n';
    std::cout << ++x << '\n';
    std::cout << x << '\n';
    std::cout << x++ << '\n';
    std::cout << x << '\n';

    /// General form of `if` statement
    // if (conditon){
    //     expr1;
    //     expr2;
    // }
    // else{
    //     expr1;
    //     expr2;
    // }

    /// Simple `if` with one expression
    // if (cond)
    //     expr;

    /// Short form of `if`: ternary operator
    // int temp = 10;
    // int formula = (temp > 10) ? (temp-32)*5/9 : 100.0*(temp/max_temp);

    char c = 48; // code of '0' symbol
    std::cout << c << '\n'; // output will be symbol '0'

    /// First form of `while` cycle -- with pre-condition
    /// If the condition is false at the start, no iterations happen
    int y = 10;
    while (y > 10)
    {
        std::cout << y-- << '\n';
    }

    /// Second form of `while` cycle -- with post-condition
    /// At least one iteration guaranteed to be executed
    do
    {
        std::cout << y-- << '\n';
    } while (y > 10);

    /// `for` loop
    for (int idx = 0, double z = 0.0; idx < 10; ++idx)
    {
        std::cout << idx << '\n';
        z *= z;
    }

    /// This is the same `for` loop expressed with `while`
    // int idx = 0;
    // while (idx < 10)
    // {
    //     std::cout << idx << '\n';
    //     ++idx;
    // }
    
    return 0;
}