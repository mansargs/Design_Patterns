#pragma once

#include "CharacterFlyweight.hpp"
#include <unordered_map>
#include <memory>

struct CharacterKey {
	char symbol;
	std::string font;

	bool operator==(const CharacterKey& other) const {
		return symbol == other.symbol && font == other.font;
	}
};

struct CharacterKeyHash {
	std::size_t operator()(const CharacterKey& k) const {
		return std::hash<char>()(k.symbol) ^ (std::hash<std::string>()(k.font) << 1);
	}
};

class FlyweightFactory {
	private:
		std::unordered_map<CharacterKey, std::shared_ptr<CharacterFlyweight>, CharacterKeyHash> pool;

	public:
		std::shared_ptr<CharacterFlyweight> get(char symbol, const std::string& font) {
			CharacterKey key{symbol, font};
			auto it = pool.find(key);
			if (it != pool.end()) {
				return it->second;
			}
			auto flyweight = std::make_shared<CharacterFlyweight>(symbol, font);
			pool[key] = flyweight;
			return flyweight;
		}
};
