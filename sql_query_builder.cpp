#include "sql_query_builder.h"
//int SqlSelectQueryBuilder::a;

void SqlSelectQueryBuilder::add()
{
	SqlSelectQueryBuilder::a++;
	std::cout << SqlSelectQueryBuilder::a << std::endl;
}

//SqlSelectQueryBuilder* SqlSelectQueryBuilder::table;
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(std::string a) {
	SqlSelectQueryBuilder::query[0] = query[0] + a+" ";
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(std::string b) {
	SqlSelectQueryBuilder::query[1] = query[1] + b + " ";
	std::cout << query[1];
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(std::string c, std::string c1) {
	SqlSelectQueryBuilder::query[3] = query[3] + c + " is "+c1;
	return *this;
}
	/* bool SqlSelectQueryBuilder::BuildQuery() const {
		return true;
	}
	*/
