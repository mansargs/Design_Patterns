#pragma once

#include <string>
#include <mutex>

class Logger {
	private:
		mutable std::mutex m;
		Logger();
		Logger(const Logger& other) = delete;
		Logger& operator=(const Logger& other) = delete;

		void printTimeStamp() const;
	public:
		static Logger& getInstance();
		void log(const std::string& message) const;
};
