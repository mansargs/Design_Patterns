#pragma once

#include <string>

class Lights {
	public:
		void on();
		void off();
		void dim(int level);
};


class AirConditioner {
	public:
		void turnOff();
		void turnOn();
		void setTemprature(int temp);
};

class SecuritySystem {
	public:
		void arm();
		void disarm();
};

class MusicSystem {
	public:
		void play(std::string song);
		void stop();
};
