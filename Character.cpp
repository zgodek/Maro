#include "Character.h"


const float Character::get_x() const {
    return x;
}


const float Character::get_y() const {
    return y;
}


const float Character::get_xSpeed() const {
    return xSpeed;
}


const float Character::get_ySpeed() const {
    return ySpeed;
}


void Character::set_position(const float newX, const float newY) {
    x = newX;
    y = newY;
}


const sf::FloatRect Character::get_hit_box() const {
    return sf::FloatRect(x, y, CELL_SIZE, CELL_SIZE);
}

