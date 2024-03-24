#include <pqxx/pqxx>
#include "sql_query_builder.h"

int main(){
    pqxx::connection("host=127.0.0.1 port=5432 "
        "dbname=Shablony user=Shablony password=anna");
    SqlSelectQueryBuilder query_builder{};
    query_builder.AddColumn("name").AddColumn("phone");
    query_builder.AddFrom("students");
    query_builder.AddWhere("id", "42").AddWhere("name", "John");

    static_assert(query_builder.BuildQuery(),
                    "SELECT name, phone FROM students WHERE id=42 AND name=John;");
}
