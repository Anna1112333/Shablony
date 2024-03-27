#include "sql_query_builder.h"
//int SqlSelectQueryBuilder::a;

void SqlSelectQueryBuilder::add()
{
	SqlSelectQueryBuilder::a++;
	std::cout << SqlSelectQueryBuilder::a << std::endl;
}

//SqlSelectQueryBuilder* SqlSelectQueryBuilder::table;
/*SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(std::string a) {
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(std::string b) {
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(std::string c, std::string c1) {
	return *this;
}
	 bool SqlSelectQueryBuilder::BuildQuery() const {
		return true;
	}
	*/
