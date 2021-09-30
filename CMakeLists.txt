cmake_minimum_required(VERSION 3.8)

project(SecondTask
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE ON)

set(SRC_FILES 
              src/Solution.cpp
                  main.cpp)

include_directories(include)
#include_directories(unitTest)

add_executable(${PROJECT_NAME} ${SRC_FILES})
#target_link_libraries(${PROJECT_NAME} cppunit)