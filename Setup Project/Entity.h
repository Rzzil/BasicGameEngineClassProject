#pragma once
#include <SDL.h>
#include "Vector.h"

class Entity
{
protected:
	SDL_Renderer* renderer;
	Vector pos;//our entities xy position
	Vector velocity;//how fast to move any direction

public:
	Entity();
	~Entity();

	void setRenderer(SDL_Renderer* renderer);
	Vector getPosition();
	void setPosition(Vector pos);
	Vector getVelocity();
	void setVelocity(Vector velocity);

	virtual void update(float dt);
	virtual void updateMovement(float dt);
	virtual void draw();
};

