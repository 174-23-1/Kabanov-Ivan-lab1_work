#include <iostream>


int main()
{
    const int x{ 5 }, z{ 13 };
    const float y{ 3.3 };

    const double result{ (13*z-y*y*z+1.1*z/2) / (1.47*y+18*z) * (0.03)};
    std::cout << "Result = " << result;
}