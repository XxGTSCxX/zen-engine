#include <math/math.hpp>
#include <iostream>

int main()
{
    zen::math::radian rad{ 1 };

    std::cout << rad << std::endl;

    rad *= 2;

    std::cout << rad << std::endl;

    return 0;
}
