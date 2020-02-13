#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
class AnimObject : public GameObject {
protected:
	Animation* currentAnim;
	Input* in;
public:

	AnimObject();
	~AnimObject();
	void handleInput(float dt);
	void update(float dt);
	void setAnim(Animation* newAnim);
	void setInput(Input* setIn) { in = setIn; };

};