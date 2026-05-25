#include "PayPalAdapter.hpp"

void PayPalAdapter::pay(double amount) {
	paypal.sendPayment(amount);
}
