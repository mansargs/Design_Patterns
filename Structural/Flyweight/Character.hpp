#pragma once

#include "FlyweightFactory.hpp"

class Character {
	private:
		int x;
		int y;
		std::string color;
		std::shared_ptr<CharacterFlyweight> flyweight;

	public:
		Character(int x, int y, std::string color, std::shared_ptr<CharacterFlyweight> fw) :
			x(x), y(y), color(std::move(color)), flyweight(std::move(fw)) {}

		void render() const {
			flyweight->render(x, y, color);
		}
};
