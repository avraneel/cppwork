#include <iostream>

int x = 5;

void foo()
{
    int x = 6;
}

int main()
{
    std::cout << x << "\n";
    return 0;
}