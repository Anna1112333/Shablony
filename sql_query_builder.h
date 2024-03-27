#pragma once
#include <pqxx/pqxx>
#include <iostream>

class SqlSelectQueryBuilder {
	public:
		int a=0;
		void add();
	/*SqlSelectQueryBuilder* table;
	SqlSelectQueryBuilder& AddColumn(std::string);
	SqlSelectQueryBuilder& AddFrom(std::string);
	SqlSelectQueryBuilder& AddWhere(std::string, std::string);
	 bool BuildQuery() const;*/
};