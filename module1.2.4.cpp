#include <iostream>

int main()
{   
    int A;
    std::cin >> A;
    int res1 = A%100;
    int res2 = A/100;
    std::cout << res2 << "\n";
    std::cout << res1;
    return 0;
}