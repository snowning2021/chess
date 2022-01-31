# set minimum cmake version
cmake_minimum_required(VERSION 3.8.0 FATAL_ERROR)
# project name and language

project(chess,LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_FLAGS "-Wall  -fno-omit-frame-pointer -fno-stack-protector -fno-var-tracking -fsanitize=address")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
#set(CMAKE_CXX_FLAGS_RELEASE "-O3")


find_package(Qt5 COMPONENTS Core Gui Widgets DBus Network REQUIRED)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/chess" "chess-src")

add_executable(chess ${chess-src})

target_link_libraries(chess Qt5::Core Qt5::Gui Qt5::Network  Qt5::Widgets Qt5::DBus)

#