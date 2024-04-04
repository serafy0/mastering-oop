#include <iostream>

int sum(int x = 0, int y = 0, int z = 0, int m = 0) //<---- default arguments are not inculded in a method's signature
{
    int s;
    s = x + y + z + m;
    return s;
}

int main()
{
    std::cout << sum(1, 2, 3, 4);
    std::cout << std::endl;
    std::cout << sum(1, 2, 3);
    std::cout << std::endl;
    std::cout << sum(1, 2);
    std::cout << std::endl;
    std::cout << sum(1);
    std::cout << std::endl;
    std::cout << sum();
}

// some cases
//  int sum(int x=0, int y);
