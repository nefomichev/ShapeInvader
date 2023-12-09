//
// Created by Nikita Fomichev on 07.09.2023.
//

#ifndef SHAPEINVADER_VEC2_H
#define SHAPEINVADER_VEC2_H

class Vec2
{
public:
    double x = 0.0;
    double y = 0.0;

    Vec2();
    Vec2(double xin, double yin);

    bool operator == (const Vec2& rhs) const;
    bool operator != (const Vec2& rhs) const;
    [[nodiscard]] Vec2 operator + (const Vec2& rhs) const;
    [[nodiscard]] Vec2 operator - (const Vec2& rhs) const;
    [[nodiscard]] Vec2 operator * (double val) const;
    [[nodiscard]] Vec2 operator / (double val) const;
    void operator += (const Vec2& rhs);
    void operator -= (const Vec2& rhs);
    void operator *= (double val);
    void operator /= (double val);
    [[nodiscard]] double dist(const Vec2& rhs) const;
    [[nodiscard]] Vec2 normalize() const;
    [[nodiscard]] double length() const;
    void print() const;



};

#endif //SHAPEINVADER_VEC2_H
