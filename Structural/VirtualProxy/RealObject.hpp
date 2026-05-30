#pragma once

#include "Interface.hpp"
#include <string>
#include <iostream>

class RealImage : public Image {
	private:
		std::string filename;

		void loadFromDisk() {
			std::cout << "Loading image from disk: " << filename << "\n";
		}
	public:
		explicit RealImage(std::string file) : filename(std::move(file)) {
			loadFromDisk();
		}

		void display() override {
			std::cout << "Displaying image: " << filename << '\n';
		}
};
