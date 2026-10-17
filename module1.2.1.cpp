#include <iostream>
#include <cmath>
int main()
{   
    int x, y;
    std::cin >> x >> y;
    double res = sqrt((pow(x, 2) + pow(y, 2)));
    std::cout << res;
    
    return 0;
}