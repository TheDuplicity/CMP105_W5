#include "Zombie.h"

Zombie::Zombie() {
	for (int i = 0; i++; i < 8) {
		walk.addFrame(sf::IntRect((i * 55), 0, 55, 108));
	}
	walk.setFrameSpeed(1.f/10.f);
	currentAnim = &walk;
}

Zombie::~Zombie() {

}

void Zombie::update(float dt) {
	currentAnim->animate(dt);
	setTextureRect(currentAnim->getCurrentFrame());
}
