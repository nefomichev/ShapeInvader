#include "Vec2.h"
#include <iostream>

Vec2::Vec2() = default;
Vec2::Vec2(double xin, double yin)
           : x(xin),
             y(yin) {}

void Vec2::print() const {
    std::cout << x << ", " << y << std::endl;
}

double Vec2::length() const {
    double hyp_sqr = x * x + y * y;
    return __builtin_sqrt(hyp_sqr);
}

Vec2 Vec2::normalize() const {
    double vec_length = Vec2::length();
    double nx = x / vec_length;
    double ny = y / vec_length;
    Vec2 normalized_vec = Vec2(nx, ny);
    return normalized_vec;
}

double Vec2::dist(const Vec2& rhs) const {
    double d_sqr = __builtin_powi((rhs.x - x), 2) + __builtin_powi((rhs.y - y), 2);
    double d = __builtin_sqrt(d_sqr);
    return d;
}

void Vec2::operator /= (const double val) {
    x /= val;
    y /= val;
}

void Vec2::operator *= (const double val) {
    x *= val;
    y *= val;
}

void Vec2::operator -= (const Vec2& rhs) {
    x -= rhs.x;
    y -= rhs.y;
}

void Vec2::operator += (const Vec2& rhs) {
    x += rhs.x;
    y += rhs.y;
}

Vec2 Vec2::operator / (const double val) const {
    return {x / val, y / val};
}

Vec2 Vec2::operator * (const double val) const {
    return {x * val, y * val};
}

Vec2 Vec2::operator - (const Vec2& rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vec2 Vec2::operator + (const Vec2& rhs) const {
    return {x + rhs.x, y + rhs.y};
}

bool Vec2::operator == (const Vec2& rhs) const {
    return x == rhs.x && y == rhs.y;
}

bool Vec2::operator != (const Vec2& rhs) const {
    return !(*this == rhs);
}

