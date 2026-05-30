#pragma once

#include "Component.hpp"
#include <string>
#include <iostream>

class File : public Component {
	private:
		std::string name;
		size_t size;
	public:
		explicit File(std::string n, size_t s) : name(std::move(n)), size(s) {}

		void show(int indent = 0) const override {
			std::cout << std::string(indent, ' ') << name << " (" << size << ")\n";
		}
};
