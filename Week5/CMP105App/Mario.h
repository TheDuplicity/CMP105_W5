#pragma once
#include "AnimObject.h"
class Mario : public AnimObject {
protected:
	Animation walk;
	Animation swim;
	Animation duck;
public:
	Mario();
	~Mario();
};