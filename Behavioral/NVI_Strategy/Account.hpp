#pragma once

#include <string>

class TransactionStrategy;

class Account {
	private:
		std::string ownerName;
		float       balance;
		unsigned    id;
		TransactionStrategy *strategy;

	public:
		const std::string& getOwnerName() const { return ownerName; }
		float getBalance() const { return balance; }
		unsigned getId() const { return id; }
		TransactionStrategy* getStrategy() const { return strategy; }

		void setOwnerName(const std::string& name) { ownerName = name; }
		void setBalance(float amount) { balance = amount; }
		void setId(unsigned newId) { id = newId; }
		void setStrategy(TransactionStrategy* newStrategy) { strategy = newStrategy; }
};

