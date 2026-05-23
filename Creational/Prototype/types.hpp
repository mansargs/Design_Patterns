#pragma once

#include <memory>
#include <iostream>
#include <vector>
#include <unordered_map>

class GameObject {
	public:
		virtual std::unique_ptr<GameObject> clone() const = 0;
		virtual void update() = 0;
		virtual void render() = 0;
		virtual ~GameObject() = default;
};

class Enemy : public GameObject {
	private:
		int health;
		int damage;
	public:
		Enemy(int h, int d) : health(h), damage(d) {}
		Enemy(const Enemy& oth) {
			health = oth.health;
			damage = oth.damage;
		}

		std::unique_ptr<GameObject> clone() const override {
			return std::make_unique<Enemy>(*this);
		}

		void update() override {
			std::cout << "Enemy object updated\n";
		}

		virtual void render() override {
			std::cout << "Enemy object rendered\n";
		}
};

class BossEnemy : public GameObject {
	private:
		int health;
		std::vector<std::string> abilities;

	public:
		BossEnemy(int h, std::vector<std::string> ab) : health(h), abilities(ab) {}

		BossEnemy(const BossEnemy& oth) {
			health = oth.health;
			abilities = oth.abilities;
		}

		std::unique_ptr<GameObject> clone() const override {
			return std::make_unique<BossEnemy>(*this);
		}

		void update() override {
			std::cout << "BossEnemy object updated\n";
		}

		virtual void render() override {
			std::cout << "BossEnemy object rendered\n";
		}
};


class NPC : public GameObject {
	private:
		std::string name;
		std::string dialogue;

	public:
		NPC(const std::string& n, const std::string& d) : name(n), dialogue(d) {}

		NPC(const NPC& oth) {
			name = oth.name;
			dialogue = oth.dialogue;
		}

		std::unique_ptr<GameObject> clone() const override {
			return std::make_unique<NPC>(*this);
		}

		void update() override {
			std::cout << "NPC object updated\n";
		}

		virtual void render() override {
			std::cout << "NPC object rendered\n";
		}
};

class ObjectSpawner {
	private:
		std::unordered_map<std::string, std::unique_ptr<GameObject>> prototypes;
	public:
		void registerPrototype(const std::string& key, std::unique_ptr<GameObject> obj) {
			prototypes[key] = std::move(obj);
		}

		std::unique_ptr<GameObject> spawn(const std::string& key) {
			auto it = prototypes.find(key);
			if (it != prototypes.end())
				return it->second->clone();
			return nullptr;
		}

		~ObjectSpawner() = default;
};


