#pragma once

#include "Interfaces.hpp"
#include <iostream>

class MongoConnection : public Connection {
	public:
		void connect() override {
			std::cout << "Mongo connect\n";
		}

		void disconnect() override {
			std::cout << "Mongo disconnect\n";
		}

		void query(const std::string& q) override {
			std::cout << "Mongo query: " << q << "\n";
		}

		~MongoConnection() override {}
};

class MongoQueryBuilder : public QueryBuilder {
	public:
		std::string find(const std::string& collection) override {
			return "db." + collection + ".find()";
		}

		std::string insert(const std::string& collection) override {
			return "db." + collection + ".insert(...)";
		}

		std::string update(const std::string& collection) override {
			return "db." + collection + ".update(...)";
		}

		std::string remove(const std::string& collection) override {
			return "db." + collection + ".delete(...)";
		}

		~MongoQueryBuilder() override {}
};

class NoOpTransaction : public Transaction {
	public:
		void begin() override {}
		void commit() override {}
		void rollback() override {}
};

