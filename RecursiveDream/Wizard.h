#pragma once
#ifndef WIZRD_H
#define WIZRD_H
#include<SFML/Graphics.hpp>
namespace Dreamer {

	enum class Direction {
		Left,Right,Up,Down
	};
	enum class State {
		Jumping,Falling,Grounding
	};
	class Wizard
	{
		const int LevelSpeed=8;
		const int VertialSpeed=10;
		const int Wizard_Width=10;
		const int Wizard_Height=10;
		const int JumpCycleTimes = 5;
		const int JumpDistance = Wizard_Height*2;
	public:
		void update(sf::Time delta);
		void render(sf::RenderWindow& window);
		void handleInput(sf::RenderWindow& window);
		bool CheckBoundary(int y);
		Wizard();
	private:
		//when move left or right,we can use just one cycle to accomplete it.
		void move();
		State state_;
		int lefttime = -1;
		sf::Vector2f position_;
		Direction direction_;
		sf::RectangleShape rec_;
	};

}

#endif // !WIZRD+H

