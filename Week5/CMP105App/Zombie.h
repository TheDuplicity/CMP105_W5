#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
class Zombie: public GameObject{


public:
	Animation walk;
	Animation* currentAnim;
	Zombie();
	~Zombie();
	
	void update(float dt);

};