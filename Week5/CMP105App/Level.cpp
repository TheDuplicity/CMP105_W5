#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	
	// initialise game objects

	zombieWalkTexture.loadFromFile("gfx/animZombie.png");
	marioMovesTexture.loadFromFile("gfx/MarioSheetT.png");
	
	playerMario.setPosition(200, 200);
	playerMario.setSize(sf::Vector2f(15, 21));
	playerMario.setTexture(&marioMovesTexture);
	playerMario.setInput(in);

	enemyZombie.setPosition(100,100);
	enemyZombie.setSize(sf::Vector2f(55,108));
	enemyZombie.setTexture(&zombieWalkTexture);
	enemyZombie.setInput(in);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	enemyZombie.handleInput(dt);
	playerMario.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	enemyZombie.update(dt);
	playerMario.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(enemyZombie);

	window->draw(playerMario);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}