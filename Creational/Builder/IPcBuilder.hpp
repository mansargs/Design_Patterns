#pragma once

#include "Pc.hpp"
#include <memory>
#include <string>

class IPcBuilder {
public:
	virtual ~IPcBuilder() = default;
	virtual IPcBuilder& setCPU(const std::string& cpu) = 0;
	virtual IPcBuilder& setGPU(const std::string& gpu) = 0;
	virtual IPcBuilder& setRAM(const std::string& ram) = 0;
	virtual IPcBuilder& setSSD(const std::string& ssd) = 0;
	virtual IPcBuilder& setRGBLighting(const std::string& rgb) = 0;
	virtual IPcBuilder& setPowerSupply(const std::string& psu) = 0;
	virtual IPcBuilder& setCase(const std::string& pcCase) = 0;

	virtual std::unique_ptr<Pc> build() = 0;
};

