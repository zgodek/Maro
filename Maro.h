#pragma once
#include <memory>
#include "Consts.h"
#include "Collisions.h"
#include "Animation.h"
#include "Mushroom.h"
#include "LevelManager.h"
#include "Roomba.h"

class Mushroom;
class LevelManager;
class Collisions;

class Maro{
	bool flipped;
	bool onGround;
	bool dead;
	bool big;
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	unsigned char deathTimer;
	unsigned char growthTimer;
	unsigned char jumpTimer;
	unsigned char destroyTimer;
	unsigned char hitTimer;
	bool hit;
	Animation walkAnimation;
	Animation bigWalkAnimation;
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Maro();
	void reset();
	void become_small();
	void become_big();
	void draw(sf::RenderWindow& aWindow);
	void update(LevelManager& levelManager, unsigned int aViewX, Map& aMap, std::vector<std::shared_ptr<Roomba>>& aRoombas, std::vector<std::shared_ptr<Mushroom>>& mushrooms, unsigned int& count);
	void x_move(bool& moving);
	void y_move(unsigned char yCollision);
	void set_position(float x, float y);
	float get_x() const;
	float get_y() const;
	void die(bool instant);
	char get_death_timer();
	sf::FloatRect get_hit_box() const;
	void check_collision_with_Roombas(std::vector<std::shared_ptr<Roomba>>& aRoombas, unsigned int& count);
	void check_collision_with_Mushrooms(std::vector<std::shared_ptr<Mushroom>>& mushrooms, unsigned int& count);
	void set_x_after_collision(bool& moving, unsigned char& xCollision);
	void set_y_after_collision(unsigned char& yCollision);
	void question_block_interaction(std::vector<sf::Vector2i>& cells, std::vector<std::shared_ptr<Mushroom>>& mushrooms, LevelManager& levelManager, Map& aMap, unsigned int& count);
	bool get_flipped();
	bool get_on_ground();
	bool get_big();
};

