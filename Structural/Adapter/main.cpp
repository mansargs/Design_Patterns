#include "PaymentProcessor.hpp"
#include "StripeAdapter.hpp"
#include "PayPalAdapter.hpp"

void checkout(PaymentProcessor& processor) {
	processor.pay(20.5);
}

int main() {
	StripeAdapter stripe;
	PayPalAdapter paypal;

	checkout(stripe);
	checkout(paypal);

	return 0;
}
