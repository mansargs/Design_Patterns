#pragma once

#include "Interfaces.hpp"
#include <iostream>

class PostgreeConnection : public Connection {
	public:
		void connect() override {
			std::cout << "Postgree connect\n";
		}

		void disconnect() override {
			std::cout << "Postgree disconnect\n";
		}

		void query(const std::string& q) override {
			std::cout << "Executing Postgree: " << q << "\n";
		}
};

class PostgreeQueryBuilder : public QueryBuilder {
public:
	std::string find(const std::string& table) override {
		return "SELECT * FROM " + table;
	}

	std::string insert(const std::string& table) override {
		return "INSERT INTO " + table + " ...";
	}

	std::string update(const std::string& table) override {
		return "UPDATE " + table + " ...";
	}

	std::string remove(const std::string& table) override {
		return "DELETE FROM " + table;
	}
};

class PostgreeTransaction : public Transaction {
	public:
		void begin() override { std::cout << "BEGIN\n"; }
		void commit() override { std::cout << "COMMIT\n"; }
		void rollback() override { std::cout << "ROLLBACK\n"; }
};
