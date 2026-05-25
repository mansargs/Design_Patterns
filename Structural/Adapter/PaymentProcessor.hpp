#pragma once

class PaymentProcessor {
	public:
		virtual void pay(double amount) = 0;
		virtual ~PaymentProcessor() = default;
};
