#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory>
#include "Component.hpp"

class Folder : public Component {
	private:
		std::string name;
		std::vector<std::shared_ptr<Component>> components;

	public:
		explicit Folder(std::string n) : name(std::move(n)) {}

		void add(std::shared_ptr<Component> comp) {
			components.push_back(comp);
		}

		void remove(std::shared_ptr<Component> cand) {
			components.erase(
				std::remove_if(components.begin(), components.end(),
					[&](const std::shared_ptr<Component>& c) {
						return c.get() == cand.get();
					}),
				components.end()
			);
		}

		void show(int indent = 0) const override {
			std::cout << std::string(indent, ' ') << name << "/\n";
			for (const auto& c : components) {
				c->show(indent + 2);
			}
		}
};
