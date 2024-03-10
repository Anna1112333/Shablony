#include <iostream>

class SqlSelectQueryBuilder {
	public:
	SqlSelectQueryBuilder* table;
	SqlSelectQueryBuilder AddColumn(std::string);
	SqlSelectQueryBuilder AddFrom(std::string);
	SqlSelectQueryBuilder AddWhere(std::string, std::string);
	const bool BuildQuery();
};