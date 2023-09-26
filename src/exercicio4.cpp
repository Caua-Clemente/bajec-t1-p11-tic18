#include<iostream>

void calcula(int &x, int &y)
{
    int x2 = x;
    int y2 = y;

    x = x2 + y2;
    y = x2 - y2;
}

int main()
{
    int x, y;

    std::cout << "x: ";
    std::cin >> x;
    
    std::cout << "y: ";
    std::cin >> y;
    
    calcula(x, y);

    std::cout << "x - " << x << std::endl;
    std::cout << "y - " << y << std::endl;
}