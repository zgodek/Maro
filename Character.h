#pragma once
#include "Consts.h"


class Character {
protected:
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	bool dead;
	sf::Sprite sprite;
	sf::Texture texture;
public:
	const virtual float get_x() const;
	const virtual float get_y() const;
	const virtual float get_xSpeed() const;
	const virtual float get_ySpeed() const;
	virtual void set_position(const float newX, const float newY);
	const virtual sf::FloatRect get_hit_box() const;


};

