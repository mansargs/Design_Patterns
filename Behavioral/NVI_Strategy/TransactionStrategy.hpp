#pragma once

class Account;

class TransactionStrategy {
	protected:
		virtual void doExecute(Account& acc, float amount) = 0;
	public:
		void execute(Account& acc, float amount);
		virtual ~TransactionStrategy() {}
};

class DepositStrategy : public TransactionStrategy {
	protected:
		void doExecute(Account& acc, float amount) override;
};

class WithdrawalStrategy : public TransactionStrategy {
	protected:
		void doExecute(Account& acc, float amount) override;
};

class TransferStrategy : public TransactionStrategy {
	private:
		Account* targetAccount;
	public:
		TransferStrategy(Account* target) : targetAccount(target) {}
	protected:
		void doExecute(Account& acc, float amount) override;
};
