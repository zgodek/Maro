#pragma once
#include <memory>
#include "Consts.h"
#include "Collisions.h"
#include "Animation.h"
#include "Mushroom.h"
#include "LevelManager.h"
#include "Roomba.h"
#include "Character.h"

class Mushroom;
class LevelManager;
class Collisions;

class Maro: public Character {
	bool flipped;
	bool onGround;
	bool big;
	unsigned char deathTimer;
	unsigned char growthTimer;
	unsigned char jumpTimer;
	unsigned char destroyTimer;
	unsigned char hitTimer;
	bool hit;
	Animation walkAnimation;
	Animation bigWalkAnimation;
public:
	Maro();
	void reset();
	void become_small();
	void become_big();
	void draw(sf::RenderWindow& aWindow);
	void update(LevelManager& levelManager, const unsigned int aViewX, Map& aMap, std::vector<std::shared_ptr<Roomba>>& aRoombas, std::vector<std::shared_ptr<Mushroom>>& mushrooms, unsigned int& count);
	void x_move(bool& moving);
	void y_move(const unsigned char yCollision);
	void die(const bool instant);
	const char get_death_timer();
	const sf::FloatRect get_hit_box();
	void check_collision_with_Roombas(std::vector<std::shared_ptr<Roomba>>& aRoombas, unsigned int& count);
	void check_collision_with_Mushrooms(std::vector<std::shared_ptr<Mushroom>>& mushrooms, unsigned int& count);
	void set_x_after_collision(bool& moving, const unsigned char& xCollision);
	void set_y_after_collision(const unsigned char& yCollision);
	void question_block_interaction(std::vector<sf::Vector2i>& cells, std::vector<std::shared_ptr<Mushroom>>& mushrooms, LevelManager& levelManager, Map& aMap, unsigned int& count);
	const bool get_flipped();
	const bool get_on_ground();
	const bool get_big();
};

