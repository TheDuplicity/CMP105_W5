#include "Zombie.h"

Zombie::Zombie() {
	for (int i = 0; i < 8; i++) {
		walk.addFrame(sf::IntRect((i * 55), 0, 55, 108));
	}
	walk.setFrameSpeed(1.f/10.f);
	setAnim(&walk);
}

Zombie::~Zombie() {

}

void Zombie::update(float dt) {
	AnimObject::update(dt);
}

void Zombie::handleInput(float dt){
	AnimObject::handleInput(dt);
}
