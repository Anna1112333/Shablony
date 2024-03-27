cmake_minimum_required(VERSION 3.22.0) #версия cmake

project(Shablony)  #название проекта
set(PostgreSQL_ADDITIONAL_VERSIONS "15")
add_subdirectory("C:/Dock/PSQ 001/c_pq/libpqxx-7.8.1" lib_Shablony) 
#добавляю библиотеку и называю её libc_pq \ заменяем на /
add_executable(Shablony main.cpp "sql_query_builder.h" "sql_query_builder.cpp")  #ресуры
target_compile_features(Shablony PRIVATE cxx_std_17) # стандарт 17 для с++
target_link_libraries(Shablony pqxx) #линкуем