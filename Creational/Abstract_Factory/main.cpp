#include <iostream>
#include "MongoImpl.hpp"
#include "PostgreeImpl.hpp"
#include "SqlImpl.hpp"

void testDatabase(Connection* conn, QueryBuilder* qb, Transaction* tx, const std::string& name) {
	std::cout << "\n===== Testing " << name << " =====\n";
	conn->connect();
	tx->begin();
	std::string query = qb->insert("users");
	conn->query(query);
	tx->commit();
	conn->disconnect();
}

int main() {
	{
		Connection* conn = new MongoConnection();
		QueryBuilder* qb = new MongoQueryBuilder();
		Transaction* tx = new NoOpTransaction();
		testDatabase(conn, qb, tx, "MongoDB");
		delete conn;
		delete qb;
		delete tx;
	}
	{
		Connection* conn = new PostgreeConnection();
		QueryBuilder* qb = new PostgreeQueryBuilder();
		Transaction* tx = new PostgreeTransaction();
		testDatabase(conn, qb, tx, "PostgreSQL");
		delete conn;
		delete qb;
		delete tx;
	}
	{
		Connection* conn = new SqlConnection();
		QueryBuilder* qb = new SQLQueryBuilder();
		Transaction* tx = new SQLTransaction();
		testDatabase(conn, qb, tx, "SQL");
		delete conn;
		delete qb;
		delete tx;
	}

	return 0;
}
