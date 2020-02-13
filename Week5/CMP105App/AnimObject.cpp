#include "AnimObject.h"

AnimObject::AnimObject() {
	currentAnim = nullptr;
}

AnimObject::~AnimObject() {

}

void AnimObject::update(float dt) {
	if (currentAnim != nullptr){
		currentAnim->animate(dt);
		setTextureRect(currentAnim->getCurrentFrame());
	}

}

void AnimObject::handleInput(float dt) {
	setVelocity(sf::Vector2f(0, 0));
	if (in->isKeyDown(sf::Keyboard::W)) {
		velocity.y -= 0.25;
	}
	if (in->isKeyDown(sf::Keyboard::S)) {
		velocity.y += 0.25;
	}
	if (in->isKeyDown(sf::Keyboard::A)) {
		velocity.x -= 0.25;
	}
	if (in->isKeyDown(sf::Keyboard::D)) {
		velocity.x += 0.25;
	}
	if (velocity.x != 0) {
		if (velocity.x < 0) {
			currentAnim->setFlipped(true);
		}
		else {
			currentAnim->setFlipped(false);
		}
	}
	move(velocity);
}

void AnimObject::setCurrAnim(Animation* newAnim) {
	currentAnim = newAnim;
}