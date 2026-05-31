#include "ConcreteNotifications.hpp"
#include "ConcreteMessageSender.hpp"

int main() {
	GmailSender gmail;
	TwilioSender twilio;
	EmailNotification email1(&gmail);
	EmailNotification email2(&twilio);
	SMSNotification sms1(&twilio);
	email1.notify("Welcome to our platform!");
	email2.notify("Backup email system active.");
	sms1.notify("Your OTP is 123456");
	return 0;
}
