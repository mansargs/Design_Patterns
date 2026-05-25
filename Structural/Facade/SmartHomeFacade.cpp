#include "SmartHomeFacade.hpp"
#include <iostream>

void SmartHomeFacade::leaveHome() {
	std::cout << "\n--- Leaving Home ---\n";
	lights.off();
	conditioner.turnOff();
	music.stop();
	security.arm();
}

void SmartHomeFacade::arriveHome() {
	std::cout << "\n--- Arriving Home ---\n";
	security.disarm();
	lights.on();
	conditioner.turnOn();
	conditioner.setTemprature(22);
	music.play("welcome_home.mp3");
}

void SmartHomeFacade::movieMode() {
	std::cout << "\n--- Movie Mode ---\n";
	lights.dim(10);
	conditioner.turnOn();
	conditioner.setTemprature(20);
	music.play("cinema_theme.mp3");
	security.disarm();
}
