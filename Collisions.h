#pragma once
#include "Consts.h"

class Collisions{
public:
    const static unsigned char map_collision(float x, float y, const Map& aMap, bool isBig);
    static void get_collision_question_block(std::vector<sf::Vector2i>& aCollisionCells, float x, float y, const Map& aMap, const bool isBig);
    static void coin_collision(std::vector<sf::Vector2i>& aCollisionCells, float x, float y, const Map& aMap, const bool isBig, unsigned int& count);
    static void get_collision_brick(std::vector<sf::Vector2i>& aCollisionCells, float x, float y, const Map& aMap);
    const static void get_x_y(float& x, float& y, unsigned char i, float cellX, float cellY, const bool isBig);
};