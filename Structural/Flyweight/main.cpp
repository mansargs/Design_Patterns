#include "Character.hpp"

int main() {
	FlyweightFactory factory;
	auto fwA = factory.get('A', "Arial");
	auto fwB = factory.get('B', "Arial");

	Character c1(10, 30, "red", fwA);
	Character c2(24, 89, "green", fwA);

	c1.render();
	c2.render();
}
