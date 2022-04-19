cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(BookShop VERSION 1.0)

add_executable(BookShop main.cpp)
target_include_directories(BookShop PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


