#include <iostream>
#include "SmartHomeFacade.hpp"

int main() {
	SmartHomeFacade home;
	std::cout << "Smart Home System Started\n";
	home.arriveHome();
	std::cout << "\n--- Doing some activities at home ---\n";
	home.movieMode();
	std::cout << "\n--- Time to leave ---\n";
	home.leaveHome();
	std::cout << "\nSmart Home System Ended\n";
	return 0;
}
