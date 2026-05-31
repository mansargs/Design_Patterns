#pragma once

#include <string>

class MessageSender {
	public:
		virtual ~MessageSender() = default;
		virtual void sendMessage(const std::string& message) = 0;
};

