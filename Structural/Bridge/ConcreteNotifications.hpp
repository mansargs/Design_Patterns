#pragma once

#include "INotification.hpp"

class EmailNotification : public Notification {
	public:
		explicit EmailNotification(MessageSender* sender)
			: Notification(sender) {}

		void notify(const std::string& msg) override {
			sender->sendMessage("[EMAIL] " + msg);
		}
};


class SMSNotification : public Notification {
	public:
		explicit SMSNotification(MessageSender* sender)
			: Notification(sender) {}

		void notify(const std::string& msg) override {
			sender->sendMessage("[SMS] " + msg);
		}
};
