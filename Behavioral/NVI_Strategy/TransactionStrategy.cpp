#include <iostream>
#include "Account.hpp"
#include "TransactionStrategy.hpp"

void TransactionStrategy::execute(Account& acc, float amount)
{
	std::cout << "[INFO] Executing transaction for account: "
			  << acc.getOwnerName() << " (ID: " << acc.getId() << ")\n";
	doExecute(acc, amount);
	std::cout << "[INFO] Transaction completed\n";
}

void DepositStrategy::doExecute(Account& acc, float amount) {
	std::cout << "[DEPOSIT] Account: " << acc.getOwnerName()
			  << " | Amount: " << amount << "\n";
}

void WithdrawalStrategy::doExecute(Account& acc, float amount) {
	std::cout << "[WITHDRAWAL] Account: " << acc.getOwnerName()
			  << " | Amount: " << amount << "\n";
}

void TransferStrategy::doExecute(Account& acc, float amount) {
	if (targetAccount) {
		std::cout << "[TRANSFER] From: " << acc.getOwnerName()
				  << " To: " << targetAccount->getOwnerName()
				  << " | Amount: " << amount << "\n";
	}
	else
		std::cout << "[TRANSFER] No target account set!\n";
}
