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
    Vec2(float xin, float yin);

    bool operator == (const Vec2& rhs) const;
    bool operator != (const Vec2& rhs) const;

    Vec2 operator + (const Vec2& rhs) const;
    Vec2 operator - (const Vec2& rhs) const;
    Vec2 operator * (const float val) const;
    Vec2 operator / (const float val) const;

    void operator += (const Vec2& rhs) const;
    void operator -= (const Vec2& rhs) const;
    void operator *= (const float val) const;
    void operator /= (const float val) const;

    float dist(const Vec2& rhs) const;
    void normalize() const;
    double length() const;
    void print() const;



};

#endif //SHAPEINVADER_VEC2_H
