#pragma once
#include "AnimObject.h"
class Zombie: public AnimObject{


public:
	Animation walk;

	Zombie();
	~Zombie();	
	void handleInput(float dt);
	void update(float dt);

};