/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>


enum class Direction
{
	None,
	Up,
	Left,
	Right,
	Down
};

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void checkDirection();
	void move();
	
	void setupFontAndText();
	void setupSprite();
	void changeCharacter();


	bool m_isaMario{ false };// is mario the current character
	sf::RenderWindow m_window; // main SFML window
	
	sf::Font m_marioFont; // font used for mario
	sf::Text m_marioName; // text too display characters name
	
	bool m_exitGame; // control exiting game
	Direction m_direction{ Direction::None };
	float m_speed = 2.345;
	sf::Texture m_MarioTexture; // texture for mario  luigi
	sf::Sprite m_marioSprite; // sporite for martio andf luigi
	sf::Vector2f m_marioLocation;// marios location
};

#endif // !GAME_HPP

