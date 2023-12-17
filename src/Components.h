//
// Created by Nikita Fomichev on 16/12/23.
//
#include "Vec2.h"
#include <SFML/Graphics.hpp>

#ifndef SHAPEINVADER_COMPONENTS_H
#define SHAPEINVADER_COMPONENTS_H

class CTransform {
public:
    Vec2 pos = {0.0, 0.0};
    Vec2 velocity = {0.0, 0.0};
    double angle = 0.0;

    CTransform() = default;
    CTransform(const Vec2 &p, const Vec2 &v, double a)
        :pos(p), velocity(v), angle(a) {};
};

class CShape {
public:
   sf::CircleShape circle;

   CShape(float radius, int points, const sf::Color& fill, const sf::Color& outline,
   float thickness)
        : circle(radius, points) {
       circle.setFillColor(fill);
       circle.setOutlineColor(outline);
       circle.setOutlineThickness(thickness);
       circle.setOrigin(radius, radius);
   }
};

class CCollision {
public:
    float radius = 0;

    CCollision() = default;
    CCollision(float r):radius(r) {}
};

class CScore {
public:
    int score = 0;
    CScore() = default;
    CScore(int s): score(s) {}

};

class CLifespan {
public:
    int remaining = 0;
    int total = 0;
    CLifespan() = default;
    CLifespan(int rem, int tot)
        :remaining(rem), total(tot) {}
};

class CInput {
public:
    bool left = false;
    bool right = false;
    bool up = false;
    bool down = false;

    CInput() = default;

};
#endif //SHAPEINVADER_COMPONENTS_H
