#pragma once

#include <string>
#include <iostream>

class CharacterFlyweight {
	private:
		char symbol;
		std::string font;
	public:
		explicit CharacterFlyweight(char c, std::string f) : symbol(c), font(std::move(f)) {}

		bool operator==(const CharacterFlyweight& other) const {
			return symbol == other.symbol && font == other.font;
		}

		char get_symbol() const { return symbol; }

		const std::string& get_font() const { return font; }

		void render(int x, int y, const std::string& color) const {
			std::cout << "char -> " << symbol
					  << " font ->" << font
					  << " position -> (" << x << ',' << y << ")"
					  << " color ->" << color << std::endl;
		}
};
