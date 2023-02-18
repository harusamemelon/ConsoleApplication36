#include <iostream>

int main()
{
    int i;
    std::cout << "First Number" << std::endl;
    std::cin >> i;
    std::cout << "first Number =\"" << i << "\"" << std::endl;

    int j;
    std::cout << "1 = addition , 2 = subtraction , 3 = multiplication , 4 = devision" << std::endl;
    std::cin >> j;

    int k;
    std::cout << "Second Number" << std::endl;
    std::cin >> k;
    std::cout << "Second Number =\"" << k << "\"" << std::endl;

    int l;

    if (j == 1)
    {
        l = i + k;
    }

    if (j == 2)
    {
        l = i - k;
    }

    if (j == 3)
    {
        l = i * k;
    }

    if (j == 4)
    {
        l = i / k;
    }

    std::cout << "=\"" << l << "\"" << std::endl;
}