#include "Subsystem.hpp"
#include <iostream>

void Lights::on() {
	std::cout << "Lights ON\n";
}

void Lights::off() {
	std::cout << "Lights OFF\n";
}

void Lights::dim(int level) {
	std::cout << "Lights dimmed to " << level << "%\n";
}

void AirConditioner::turnOn() {
	std::cout << "AC turned ON\n";
}

void AirConditioner::turnOff() {
	std::cout << "AC turned OFF\n";
}

void AirConditioner::setTemprature(int temp) {
	std::cout << "AC temperature set to " << temp << "°C\n";
}

void SecuritySystem::arm() {
	std::cout << "Security system ARMED\n";
}

void SecuritySystem::disarm() {
	std::cout << "Security system DISARMED\n";
}

void MusicSystem::play(std::string song) {
	std::cout << "Playing song: " << song << "\n";
}

void MusicSystem::stop() {
	std::cout << "Music stopped\n";
}
