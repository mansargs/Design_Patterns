#pragma once

#include <string>

class Connection {
	public:
		virtual void connect() = 0;
		virtual void disconnect() = 0;
		virtual void query(const std::string& q) = 0;
		virtual ~Connection() = default;
};

class QueryBuilder {
	public:
		virtual std::string find(const std::string& table) = 0;
		virtual std::string insert(const std::string& table) = 0;
		virtual std::string update(const std::string& table) = 0;
		virtual std::string remove(const std::string& table) = 0;
		virtual ~QueryBuilder() = default;
};

class Transaction {
	public:
		virtual void begin() = 0;
		virtual void commit() = 0;
		virtual void rollback() = 0;
		virtual ~Transaction() = default;
};

class DatabaseFactory {
	public:
		virtual Connection* createConnection() = 0;
		virtual QueryBuilder* createQueryBuilder() = 0;
		virtual Transaction* createTransaction() = 0;
		virtual ~DatabaseFactory() = default;
};


