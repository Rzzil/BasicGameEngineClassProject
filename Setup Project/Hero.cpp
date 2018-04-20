#include "Hero.h"


Hero::Hero()
{
}


Hero::~Hero()
{
}

void Hero::setAnimation(Animation* animation){
	this->animation = animation;
}

//overriding
void Hero::update(float dt){
	if (faceRight)
	{
		velocity.x = 500;
	}
	else
	{
		velocity.x = -500;
	}

	if (pos.x >= 640)
	{
		faceRight = false;
	}
		
	if (pos.x <= 0)
	{
		faceRight = true;
	}
		

	//use basic entity movement to move around
	updateMovement(dt);

	//update animations too
	animation->update(dt);
}
void Hero::draw(){
	if (animation != NULL)
	{
		if (faceRight)
			animation->draw(pos.x, pos.y);
		else
			animation->draw(pos.x, pos.y, true);
	}
}