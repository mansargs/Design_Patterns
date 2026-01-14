#pragma once

#include <string>
#include <iostream>

class Pc {
	private:
		std::string _cpu;
		std::string _gpu;
		std::string _ram;
		std::string _ssd;
		std::string _rgbLighting;
		std::string _powerSupply;
		std::string _case;

		friend class PcBuilder;
	public:
		void printInfo() const {
			std::cout << "PC Configuration:\n";
			std::cout << "CPU: " << _cpu << "\n";
			std::cout << "GPU: " << _gpu << "\n";
			std::cout << "RAM: " << _ram << "\n";
			std::cout << "SSD: " << _ssd << "\n";
			std::cout << "RGB Lighting: " << _rgbLighting << "\n";
			std::cout << "Power Supply: " << _powerSupply << "\n";
			std::cout << "Case: " << _case << "\n";
		}
};
