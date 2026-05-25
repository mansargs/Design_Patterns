#pragma once

#include "Subsystem.hpp"

class SmartHomeFacade {
	private:
		Lights lights;
		AirConditioner conditioner;
		SecuritySystem security;
		MusicSystem music;
	public:
		void leaveHome();
		void arriveHome();
		void movieMode();
};
