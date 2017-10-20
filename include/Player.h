#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>
#include <Box2D\Box2D.h>
#include "EntityManager.h"

class Player : public EntityManager {
private:
	sf::RectangleShape shape;

public:
	Player(float, float);

	sf::RectangleShape getShape();

	virtual void update();
	virtual void draw(sf::RenderWindow& window);

	~Player();
};


#endif // !PLAYER_H
