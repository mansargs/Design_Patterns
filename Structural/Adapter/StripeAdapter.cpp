#include "StripeAdapter.hpp"

void StripeAdapter::pay(double amount) {
	int cents = static_cast<int>(amount * 100);
	stripe.makePayment(cents);
}
