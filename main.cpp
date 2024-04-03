#include <iostream>
#include <pqxx/pqxx>
#include "sql_query_builder.h"
#include <Windows.h>

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
    setlocale(LC_ALL, "Rus");
    std::cout << "aaaaa";
    pqxx::connection("host=127.0.0.1 port=5432 "
        "dbname=Shablony user=Shablony password=anna");
    SqlSelectQueryBuilder query_builder;
    for (int i = 0; i<5; i++)
      
    query_builder.add();

  query_builder.AddColumn("name").AddColumn("phone");
  
    query_builder.AddFrom("students");
    query_builder.AddWhere("id", "42").AddWhere("name", "John");
std::cout << query_builder.BuildQuery()<<std::endl;
//
 // assert(true, "aaa");
}
