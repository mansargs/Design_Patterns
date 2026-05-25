#pragma once

#include "PaymentProcessor.hpp"
#include "PayPalAPI.hpp"

class PayPalAdapter : public PaymentProcessor {
	private:
		PayPalAPI paypal;
	public:
		void pay(double amount) override;
};
