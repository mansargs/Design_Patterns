#pragma once

#include "Pc.hpp"
#include "IPcBuilder.hpp"
#include <memory>
#include <string>

class PcBuilder : public IPcBuilder {
private:
	std::unique_ptr<Pc> _pc;

	void reset() { _pc = std::make_unique<Pc>(); }
public:
	PcBuilder() { reset(); }
	~PcBuilder() override = default;

	PcBuilder& setCPU(const std::string& cpu) override {
		_pc->_cpu = cpu;
		return *this;
	}

	PcBuilder& setGPU(const std::string& gpu) override {
		_pc->_gpu = gpu;
		return *this;
	}

	PcBuilder& setRAM(const std::string& ram) override {
		_pc->_ram = ram;
		return *this;
	}

	PcBuilder& setSSD(const std::string& ssd) override {
		_pc->_ssd = ssd;
		return *this;
	}

	PcBuilder& setRGBLighting(const std::string& rgb) override {
		_pc->_rgbLighting = rgb;
		return *this;
	}

	PcBuilder& setPowerSupply(const std::string& psu) override {
		_pc->_powerSupply = psu;
		return *this;
	}

	PcBuilder& setCase(const std::string& pcCase) override {
		_pc->_case = pcCase;
		return *this;
	}

	std::unique_ptr<Pc> build() override {
		std::unique_ptr<Pc> finishedPc = std::move(_pc);
		reset();
		return finishedPc;
	}
};
