#include "sql_query_builder.h"
//SqlSelectQueryBuilder* SqlSelectQueryBuilder::table;
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(std::string a){
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(std::string b) {
	return *this;
	}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(std::string c, std::string c1) {
	return *this;
}
	const bool SqlSelectQueryBuilder::BuildQuery() {
		return true;
	}

