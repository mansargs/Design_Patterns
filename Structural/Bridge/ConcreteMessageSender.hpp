#pragma once

#include "IMessageSender.hpp"
#include <iostream>

class GmailSender : public MessageSender {
	public:
		void sendMessage(const std::string& msg) override {
			std::cout << "Message sended by Gmail -> " + msg << std::endl;
		}
};

class SESSender : public MessageSender {
	public:
		void sendMessage(const std::string& msg) override {
			std::cout << "Message sended by SES -> " + msg << std::endl;
		}
};

class TwilioSender : public MessageSender {
	public:
		void sendMessage(const std::string& msg) override {
			std::cout << "Message sended by Twilio -> " + msg << std::endl;
		}
};

class FirebaseSender : public MessageSender {
	public:
		void sendMessage(const std::string& msg) override {
			std::cout << "Message sended by Firebase -> " + msg << std::endl;
		}
};
