#include "Mario.h"
#include <iostream>
Mario::Mario() {
	currAnimSelect = 0;
	animClock = 0.f;

	allAnims[0].addFrame(sf::IntRect(0, 0, 15, 21));
	allAnims[0].addFrame(sf::IntRect(15, 0, 15, 21));
	allAnims[0].addFrame(sf::IntRect(30, 0, 15, 21));
	allAnims[0].addFrame(sf::IntRect(45, 0, 15, 21));
	allAnims[0].setFrameSpeed(1.f/10.f);

	allAnims[1].addFrame(sf::IntRect(0, 21, 16, 20));
	allAnims[1].addFrame(sf::IntRect(16, 21, 16, 20));
	allAnims[1].addFrame(sf::IntRect(32, 21, 16, 20));
	allAnims[1].setFrameSpeed(1.f / 10.f);

	allAnims[2].addFrame(sf::IntRect(0, 41, 16, 20));
	allAnims[2].addFrame(sf::IntRect(16, 41, 16, 20));
	allAnims[2].setFrameSpeed(1.f / 10.f);

	setCurrAnim(&allAnims[0]);

}

Mario::~Mario() {

}

void Mario::update(float dt) {
	animClock += dt;
	if (animClock >= 5) {
		animClock = 0;
		currAnimSelect++;
		if (currAnimSelect == 3) {
			currAnimSelect = 0;
		}
	}
	if (currentAnim->getFlipped()) {
		allAnims[currAnimSelect].setFlipped(true);
	}
	else {
		allAnims[currAnimSelect].setFlipped(false);
	}
	setCurrAnim(&allAnims[currAnimSelect]);
	AnimObject::update(dt);
}