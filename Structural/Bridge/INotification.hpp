#pragma once

#include "IMessageSender.hpp"

class Notification {
	protected:
		MessageSender* sender;
	public:
		explicit Notification(MessageSender* sender) : sender(sender) {}

		virtual void notify(const std::string& msg) = 0;
		virtual ~Notification() = default;
};
