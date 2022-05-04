#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <array>
#include <cmath>
#include "Consts.h"

class Roomba{
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	unsigned char jumpTimer;
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Roomba();
	void draw(sf::RenderWindow& aWindow);
	void move(const Map& aMap);
	void set_position(float x, float y);
	float get_x() const;
	float get_y() const;
};