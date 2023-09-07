#include "Vec2.h"
#include <iostream>

Vec2::Vec2() = default;
Vec2::Vec2(float xin, float yin)
           : x(xin),
             y(yin)
{
}

void Vec2::print() const
{
    std::cout << x << ", " << y << std::endl;
}

double Vec2::length() const
{
    float hyp_sqr = x * x + y * y;
    return __builtin_sqrt(hyp_sqr);
}
