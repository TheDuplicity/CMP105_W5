#include "PiskelMan.h"

PiskelMan::PiskelMan() {
	for (int i = 0; i < 26; i++) {
		piskelWink.addFrame(sf::IntRect(i * 32, 0, 32, 32));
	}
	piskelWink.setFrameSpeed(1.f/10.f);
	setCurrAnim(&piskelWink);
}
PiskelMan::~PiskelMan() {

}