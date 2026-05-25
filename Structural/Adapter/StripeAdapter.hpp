#pragma once

#include "PaymentProcessor.hpp"
#include "StripeAPI.hpp"

class StripeAdapter : public PaymentProcessor {
private:
		StripeAPI stripe;
	public:
		void pay(double amount) override;
};
