#include "Logger.hpp"
#include <cassert>
#include <thread>
#include <vector>
#include <iostream>

int main() {
	Logger& logger1 = Logger::getInstance();
	Logger& logger2 = Logger::getInstance();

	assert(&logger1 == &logger2);
	std::cout << "Singleton instance verified!" << std::endl;

	logger1.log("Hello from logger1");
	logger2.log("Hello from logger2");

	// Optional: Test multithreading
	auto threadFunc = []() {
		Logger::getInstance().log("Logging from thread");
	};
	std::vector<std::thread> threads;
	for (int i = 0; i < 5; ++i) {
		threads.emplace_back(threadFunc);
	}
	for (auto& t : threads) t.join();
	std::cout << "All threads logged successfully!" << std::endl;
	return 0;
}
