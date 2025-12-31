#include "Logger.hpp"
#include <chrono>
#include <iomanip>
#include <ctime>
#include <iostream>

Logger::Logger() {}

Logger& Logger::getInstance() {
	static Logger instance;
	return instance;
}

void Logger::printTimeStamp() const {
	auto now = std::chrono::system_clock::now();
	std::time_t now_time = std::chrono::system_clock::to_time_t(now);

	std::tm local_tm{};
#if defined(_WIN32) || defined(_WIN64)
	localtime_s(&local_tm, &now_time);
#else
	localtime_r(&now_time, &local_tm);
#endif
	std::cout << "[ " << std::put_time(&local_tm, "%Y-%m-%d %H:%M:%S") << " ] ";
}

void Logger::log(const std::string& message) const{
	std::unique_lock<std::mutex> lock(m);
	printTimeStamp();
	std::cout << message << std::endl;
}
