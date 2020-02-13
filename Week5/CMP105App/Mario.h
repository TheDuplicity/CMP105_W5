#pragma once
#include "AnimObject.h"
class Mario : public AnimObject {
protected:
	Animation allAnims[3];
	float animClock;
	int currAnimSelect;
public:
	Mario();
	~Mario();
	void setAnim(int selectAnim, Animation addAnim) { allAnims[selectAnim] = addAnim; };
	void update(float dt);
	
};