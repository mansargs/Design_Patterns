#include <iostream>
#include "Pc.hpp"
#include "PcBuilder.hpp"

int main() {
	PcBuilder builder; // single builder instance

	// Build the first PC (Gaming PC)
	auto gamingPc = builder
						.setCPU("Intel i9")
						.setGPU("NVIDIA RTX 4090")
						.setRAM("64GB")
						.setSSD("2TB NVMe")
						.setRGBLighting("Yes")
						.setPowerSupply("1000W")
						.setCase("Cooler Master")
						.build();

	std::cout << "=== Gaming PC ===\n";
	gamingPc->printInfo();
	std::cout << "\n";

	// Build the second PC (Office PC)
	auto officePc = builder
						.setCPU("Intel i5")
						.setRAM("16GB")
						.setSSD("512GB")
						.setPowerSupply("500W")
						.setCase("Standard Tower")
						.build();

	std::cout << "=== Office PC ===\n";
	officePc->printInfo();
	std::cout << "\n";

	// Build a third PC (Custom)
	auto customPc = builder
						.setCPU("AMD Ryzen 9")
						.setGPU("AMD Radeon RX 7900")
						.setRAM("32GB")
						.setSSD("1TB")
						.setPowerSupply("850W")
						.setCase("RGB Tower")
						.build();

	std::cout << "=== Custom PC ===\n";
	customPc->printInfo();

	return 0;
}
