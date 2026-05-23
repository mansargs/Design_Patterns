#include "types.hpp"

int main() {
	ObjectSpawner spawner;
	spawner.registerPrototype("enemy", std::make_unique<Enemy>(100, 10));
	spawner.registerPrototype("boss", std::make_unique<BossEnemy>(500, std::vector<std::string>{"fire", "rage"}));
	spawner.registerPrototype("npc", std::make_unique<NPC>("Bob", "Hello traveler"));
	auto e1 = spawner.spawn("enemy");
	auto e2 = spawner.spawn("enemy");
	auto boss = spawner.spawn("boss");
	auto npc = spawner.spawn("npc");
	e1->update();
	e2->render();
	boss->update();
	npc->render();
	return 0;
}
