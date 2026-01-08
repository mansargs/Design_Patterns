#include <iostream>
#include "Account.hpp"
#include "TransactionStrategy.hpp"

int main()
{
	Account acc1;
	acc1.setOwnerName("Alice");
	acc1.setId(1);
	acc1.setBalance(1000.0f);

	Account acc2;
	acc2.setOwnerName("Bob");
	acc2.setId(2);
	acc2.setBalance(500.0f);

	DepositStrategy deposit;
	WithdrawalStrategy withdraw;
	TransferStrategy transfer(&acc2);

	std::cout << "=== Deposit Strategy ===\n";
	acc1.setStrategy(&deposit);
	acc1.getStrategy()->execute(acc1, 200.0f);

	std::cout << "\n=== Withdrawal Strategy ===\n";
	acc1.setStrategy(&withdraw);
	acc1.getStrategy()->execute(acc1, 150.0f);

	std::cout << "\n=== Transfer Strategy ===\n";
	acc1.setStrategy(&transfer);
	acc1.getStrategy()->execute(acc1, 300.0f);
	return 0;
}
