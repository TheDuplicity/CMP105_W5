#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "PiskelMan.h"
#include "Zombie.h"
#include "Mario.h"
#include <string>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;
	Zombie enemyZombie;
	Mario playerMario;
	PiskelMan theHERO;
	sf::Texture zombieWalkTexture, marioMovesTexture, theCoolestTexture;
};